#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG 

int main (void)
{
	int t;
	int i;
	char str[51];
	int strsize;
//1.문자열을 입력 최대 50문자
	scanf("%s",str);
#ifdef DEBUG
	printf("%s\n",str);
#endif

//2.입력받은 문자열이 소문자인지 확인
//strlen은 널이 있다는 확신이 있을때만 쓴다!!!!!
	for (i=0;i<strlen(str);i++)
	{
		if(!(str[i]>='a' && str[i]<='z'))
		{
		printf("error : repeat\n");
		break;
		}
	}
#ifdef DEBUG
	printf("ok\n");
#endif

//3. 


}
