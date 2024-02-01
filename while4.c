#include<stdio.h>

void main()
{
	int i,no;
	
	printf("Enter any no :");
	scanf("%d",&no);
	
	i=no;
	while(i>=1)
		printf("%d ",i--);
}