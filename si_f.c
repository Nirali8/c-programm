#include<stdio.h>
float si()
{
	float p,r,n;
	printf("Enter Principle amount:");
	scanf("%f",&p);
	printf("Enter rate of intrest:");
	scanf("%f",&r);
	printf("Enter no of year:");
	scanf("%f",&n);
	
	return (p*r*n)/100;
}
void main()
{
	printf("Simple Intrest is = %f",si());
}