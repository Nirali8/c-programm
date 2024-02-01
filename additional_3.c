#include<stdio.h>

void main()
{
	int no,sum=0,mult=1;
	printf("enter size of array:");
	scanf("%d",&no);
	
	int arr[no];
	for(int i=0;i<no;i++)
	{
		printf("enter value[%d]:",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
		mult*=arr[i];
	}
	printf("sum is %d \nMultiplication is %d",sum,mult);
}