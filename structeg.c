#include <stdio.h>

struct Test1{
	char a;
	char b;
	char c;
	int d;

};

int main ()
{
	int i;
	struct Test1 test;
		printf("%p\n",&test.a);
		 printf("%p\n",&test.b);
		 printf("%p\n",&test.c);
		 printf("%p\n",&test.d);
	return 0;
}
