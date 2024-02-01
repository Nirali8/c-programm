#include<stdio.h>
float area()
{
	float pi = 22/7,r;
	printf("Enter radious :");
	scanf("%f",&r);
	return pi*r*r;
}
void main()
{
	printf("Area of circle = %f",area());
}