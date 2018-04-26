#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define Max_value 100

struct student{
	unsigned char name[8];
	unsigned char kor;
	unsigned char eng;
	unsigned char math;
	unsigned char germany;
	unsigned short total;
	
	float avg;
};

int main ()
{
	struct student a[100];
	int i;
	

	for (i=0;i<100;i++)
	{
		srand(time(NULL));
		a[i].kor = (rand() %Max_value) +1;
		srand(time(NULL));
		a[i].eng = (rand() %Max_value) +1;
		srand(time(NULL));
        	a[i].math = (rand() %Max_value) +1;
		srand(time(NULL));
        	a[i].germany = (rand() %Max_value) +1;


	}
	for (i=0;i<100;i++)
	{
	
		a[i].total = a[i].kor + a[i].eng + a[i].math + a[i].germany;
		a[i].avg = a[i].total / 4;

		printf("%.5f\n",a[i].avg);

	}	
}

	
