#include<stdio.h>

void main()
{
	int no,d=1,temp;
	printf("enter size of array:");
	scanf("%d",&no);
	
	int arr[no];
	for(int i=0;i<no;i++)
	{
		printf("enter value[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<no/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[no-d];
		arr[no-d]=temp;
		d++;
	}
	for(int i=0;i<no;i++)
		printf("\nvalue[%d]: %d",i,arr[i]);
}