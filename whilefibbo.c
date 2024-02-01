#include<stdio.h>

void main()
{
	int i=1,no,t1=0,t2=1,sum;
	
	printf("Enter any no:");
	scanf("%d",&no);
	
	printf("%d ",t2);
	while(i<=no)
	{
		sum=t1+t2;
		printf("%d ",sum);
		t1=t2;
		t2=sum;
		i++;
	}
}