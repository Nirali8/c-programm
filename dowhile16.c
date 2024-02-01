#include<stdio.h>

void main()
{
	int i=1,no,j=1;
	
	printf("Enter any no :");
	scanf("%d",&no);
	
	do
	{
		printf("%d ",j);
		j*=2;
		i++;
	}while(i<=no);
}