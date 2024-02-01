#include<stdio.h>

void main()
{
	int i=1,no;
	printf("Enter any no:");
	scanf("%d",&no);
	do
	{
		printf("%d ",i);
		i+=2;
	}while(i<=no);
}