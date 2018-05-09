#include <stdio.h>

extern int add(int a, int b);
extern int sub(int a, int b);
extern int mul(int a, int b);
extern int div(int a, int b);

int main (void)
{
	int a,b,c;
	a=8;b=4;
	c=add(a,b);
	printf("%d\n",c);
	c=sub(a,b);
	printf("%d\n",c);
	c=mul(a,b);
	printf("%d\n",c);
	c=div(a,b);
	printf("%d\n",c);

	return 0;
}
