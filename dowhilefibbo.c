#include<stdio.h>

void main()
{
	int i=1,t1=0,t2=1,sum,no;
	
	printf("Enter any no :");
	scanf("%d",&no);
	
	printf("%d ",t2);
	do
	{
		sum=t1+t2;
		printf("%d ",sum);
		t1=t2;
		t2=sum;
		i++;
	}while(i<=no);
}