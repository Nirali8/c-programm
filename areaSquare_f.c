#include<stdio.h>
int area()
{
	int l;
	printf("Enter length of square:");
	scanf("%d",&l);
	return l*l;
}
void main()
{
	int a = area();
	printf("Area of square = %d",a);
}