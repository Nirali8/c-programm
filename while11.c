#include<stdio.h>

void main()
{
	int i=1,no,sum=0;
	
	printf("Enter any no :");
	scanf("%d",&no);
	
	while(i<=no)
	{
		printf("%d ",i);
		sum+=i;
		i+=2;
	}
	printf("\nSum of odd : %d",sum);
}