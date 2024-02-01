#include<stdio.h>

int no_check2()
{
	int a,b;
	printf("enter any no:");
	scanf("%d",&a);
	printf("enter any no:");
	scanf("%d",&b);
	if(a>b)
		return a;
	else
		return b;
}
int no_check3()
{
	int a,b,c;
	printf("\nenter any no:");
	scanf("%d",&a);
	printf("enter any no:");
	scanf("%d",&b);
	printf("enter any no:");
	scanf("%d",&c);
	if(a>b&&a>c)
		return a;
	else if(b>a&&b>c)
		return b;
	else
		return c;
}
void swap()
{
	int a,b;
	printf("\nenter any no:");
	scanf("%d",&a);
	printf("enter any no:");
	scanf("%d",&b);
	int c=a;
	a=b;
	b=a;
	printf("no1 = %d && no2 = %d",a,b);
}
void swap1()
{
	int a,b;
	printf("\nenter any no:");
	scanf("%d",&a);
	printf("enter any no:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("no1 = %d && no2 = %d",a,b);
}
int leap()
{
	int y;
	printf("\nEnter any year yyyy:");
	scanf("%d",&y);
	if((y%4==0&&y%100!=0)||y%400==0)
		return 1;
	else
		return 0;
}
void main()
{
	printf("%d is greater",no_check2());
	printf("%d is greater",no_check3());
	swap();
	swap1();
	if(leap())
		printf("This is leap year");
	else
		printf("This is not leap year");
}