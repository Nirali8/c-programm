#include<stdio.h>

void main()
{
	int no,temp;
	printf("enter size of array:");
	scanf("%d",&no);
	
	int arr[no];
	for(int i=0;i<no;i++)
	{
		printf("enter value[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<no;i+=2)
	{
		if(no%2==0)
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	for(int i=0;i<no;i++)
		printf("\nvalue[%d]: %d",i,arr[i]);
}