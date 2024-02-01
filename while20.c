#include<stdio.h>

void main()
{
	int i=1,no,sum=0;
	
	printf("enter any no :");
	scanf("%d",&no);
	
	while(i<=no)
	{
		sum+=i;
		i++;
	}
	printf("sum of 1 to %d = %d",no,sum);
}