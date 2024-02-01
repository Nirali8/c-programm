#include<stdio.h>

void main()
{
	int i,no;
	printf("Enter any no:");
	scanf("%d",&no);
	i=no;
	do
	{
		printf("%d ",i);
		i--;
	}while(i>=1);
}