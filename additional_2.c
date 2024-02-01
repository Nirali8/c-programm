#include<stdio.h>

void main()
{
	int no,low,high;
	printf("enter size of array:");
	scanf("%d",&no);
	
	int arr[no];
	for(int i=0;i<no;i++)
	{
		printf("enter value[%d]:",i);
		scanf("%d",&arr[i]);
	}
	low = arr[0];
	high = arr[0];
	for(int i=0;i<no;i++)
	{
		if(low>arr[i])
			low=arr[i];
		if(high<arr[i])
			high=arr[i];
	}
	printf("Highest no is %d \nlowest no is %d",high,low);
}