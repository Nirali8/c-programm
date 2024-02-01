#include<stdio.h>

float t_area()
{
	int h,b;
	printf("Enter height of Triangle:");
	scanf("%d",&h);
	printf("Enter base of Triangle:");
	scanf("%d",&b);
	return h*b/2;
}
float c_area()
{
	float pi = 22/7,r;
	printf("Enter radious :");
	scanf("%f",&r);
	return pi*r*r;
}
int r_area()
{
	int l,w;
	printf("Enter length of rectangle:");
	scanf("%d",&l);
	printf("Enter width of rectangle:");
	scanf("%d",&w);
	return l*w;
}
int s_area()
{
	int l;
	printf("Enter length of square:");
	scanf("%d",&l);
	return l*l;
}
void main()
{
	printf("Area of Triangle = %f\n",t_area());
	printf("Area of circle = %f\n",c_area());
	printf("Area of rectangle = %d\n",r_area());
	printf("Area of square = %d\n",s_area());
}