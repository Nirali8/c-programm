#include<stdio.h>

void main()
{
	int no,high,high1,low;
	printf("enter size of array:");
	scanf("%d",&no);
	
	int arr[no];
	for(int i=0;i<no;i++)
	{
		printf("enter value[%d]:",i);
		scanf("%d",&arr[i]);
	}
	high = arr[0];
	low=arr[0];
	for(int i=0;i<no;i++)
	{
		if(low>arr[i])
			low=arr[i];
		if(high<arr[i])
			high=arr[i];
	}
	high1 = low;
	for(int i=0;i<no;i++)
	{
		if(arr[i]>high1&&arr[i]!=high)
			high1=arr[i];
	}
	printf("\nhighest no=%d \n2nd highest no = %d",high,high1);
}