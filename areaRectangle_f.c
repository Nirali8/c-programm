#include<stdio.h>
int area()
{
	int l,w;
	printf("Enter length of rectangle:");
	scanf("%d",&l);
	printf("Enter width of rectangle:");
	scanf("%d",&w);
	return l*w;
}
void main()
{
	int a = area();
	printf("Area of rectangle = %d",a);
}