#include<stdio.h>

void main()
{
	int i=1,no,j=2;
	
	printf("Enter any no :");
	scanf("%d",&no);
	
	do
	{
		if(i==1)
			printf("%d ",i);
		else
		{
			printf("%d ",i*j);
			j*=2;
		}
		i++;
	}while(i<=no);
}