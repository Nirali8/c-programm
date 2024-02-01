#include<stdio.h>
void no_check()
{
	int no;
	printf("enter any no:");
	scanf("%d",&no);
	if(no>0)
		printf("No is positive:");
	else if(no<0)
		printf("No is negative:");
	else
		printf("No is Zero:");
}
int div_5()
{
	int no;
	printf("\nenter any no:");
	scanf("%d",&no);
	if(no%5==0)
		return 1;
	else
		return 0;
}
int div_53()
{
	int no;
	printf("\nenter any no:");
	scanf("%d",&no);
	if(no%5==0&&no%3==0)
		return 1;
	else
		return 0;
}
void main()
{
	no_check();
	
	if(div_5())
		printf("no is divisible by 5");
	else
		printf("no is not divisible by 5");
	if(div_53())
		printf("no is divisible by 5 & 3");
	else
		printf("no is not divisible by 5 & 3");
}