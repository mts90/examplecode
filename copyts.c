#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>

#define BUFSIZE 1024

int main (int argc, char **argv)
{
	int fdin, fdout;
	char buf[BUFSIZE];
	int byteCount;
	//fdin=open("copytext1.txt",O_RDWR | O_CREAT | O_TRUNC,\
				 S_IXUSR | S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH);
	
	if (argc<3)
	{
	  write(2,"usage: copy file1 file2\n",25);
	 // perror("usage: copy file1 file2"); 
	  return -1;
	}

	// 원본파일 열기
	if ((fdin = open(argv[1],O_RDONLY))<0) //원본파일의 훼손을 방지하기 위해서 RDWR로 했는데  갑자기 컴터 꺼지면 다 사라짐
	{
	  perror(argv[1]);
	  return -1;
	}

	if ((fdout = open(argv[2],O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR))<0)
	{
	  perror(argv[2]);
	  return -1;
	}
		
	while ((byteCount = read (fdin, buf, sizeof(buf)))>0)
	  write (fdout, buf , byteCount);

	close(fdin);
	close(fdout);

	return 0;

}
