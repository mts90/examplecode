#include <stdio.h>

void increaseNum()
{
	static int num1=0;
	printf("%d\n",num1);
	num1++;
}

int main ()
{
	increaseNum();
	increaseNum();
	increaseNum();
	increaseNum();
	increaseNum();
	return 0;

}

