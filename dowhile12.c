#include<stdio.h>

void main()
{
	int i=1,no,sum=0;
	printf("Enter any no:");
	scanf("%d",&no);
	do
	{
		printf("%d ",i);
		sum+=i;
		i+=2;
	}while(i<=no);
	printf("\nsum = %d",sum);
}