#include<stdio.h>

void main()
{
	int i=1,no;
	
	printf("Enter any no :");
	scanf("%d",&no);
	
	i=-no;
	while(i<=no)
		printf("%d ",i++);
}