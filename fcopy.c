#include <stdio.h>

#define Bufsize 1024

int main (int argc, char ** argv)
{
	int bytecount;
 	FILE *in, *out; // 구조체
	char buf[Bufsize];

	// 실행 시 입력 된 개수가 3개가 아니면 정상입력이 아니다.
	if (argc!=3)
	{
	   fprintf(stderr, "usage : fcopy file1 file2");// write (2, ... ) 과 동일
	   return -1;
	}

	// 원본 파일이 비어있으면 열기
	if ((in=fopen(argv[1],"r"))==NULL)
	{
	   perror(argv[1]);
	   return -1;
	}

	// 대상파일을 열기
	if((out=fopen(argv[2],"w"))==NULL)
	{
	   perror(argv[2]);
	   return -1;
	}

	while ((bytecount = fread(buf,sizeof(char),Bufsize,in))>0)
		fwrite(buf,sizeof(char), bytecount, out);

	fclose(in); fclose(out);

	return 0;
}


