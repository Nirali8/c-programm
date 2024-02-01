#include<stdio.h>
#include<math.h>

void main()
{
	int no1,no2;
	printf("Enter two nos :");
	scanf("%d %d",&no1,&no2);
	printf("%d ^ %d = %lf",no1,no2,pow(no1,no2));
}