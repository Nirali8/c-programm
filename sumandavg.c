#include<stdio.h>

void main()
{
	int no1,no2,sum,avg;
	printf("Enter two nos :");
	scanf("%d %d",&no1,&no2);
	sum = no1+no2;
	avg = sum/2;
	printf("Sum = %d avarage = %d",sum,avg);
}