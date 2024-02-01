#include<stdio.h>

void main()
{
	int no,low,low1;
	printf("enter size of array:");
	scanf("%d",&no);
	
	int arr[no];
	for(int i=0;i<no;i++)
	{
		printf("enter value[%d]:",i);
		scanf("%d",&arr[i]);
	}
	low = arr[0];
	for(int i=0;i<no;i++)
	{
		if(low>arr[i])
			low=arr[i];
	}
	low1=arr[0]+arr[1];
	for(int i=0;i<no;i++)
	{
		if(low1>arr[i]&&low1!=low)
			low=arr[i];
	}
	printf("lowest no is %d \n2nd lowest no is %d",low,low1);
}