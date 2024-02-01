#include<stdio.h>

float area()
{
	int h,b;
	printf("Enter height of Triangle:");
	scanf("%d",&h);
	printf("Enter base of Triangle:");
	scanf("%d",&b);
	return h*b/2;
}

void main()
{
	float a = area();
	printf("Area of Triangle = %f",a);
}