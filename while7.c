#include<stdio.h>

void main()
{
	int i=2,no;
	
	printf("Enter any no :");
	scanf("%d",&no);
	
	while(i<=no)
	{
		printf("%d ",i);
		i+=2;
	}
}