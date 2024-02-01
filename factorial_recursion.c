#include<stdio.h>
int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
int factorial(int no)
{
	if(no==1||no==0)
		return 1;
	else
		return no*factorial(no-1);
}
void main()
{
	int no=getno();
	int fact =  factorial(no);
	printf("%d! = %d",no,fact);
}