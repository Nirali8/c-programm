#include<stdio.h>

void main()
{
	int no,no1,j=0;
	printf("enter size of array:");
	scanf("%d",&no);
	
	int arr[no];
	for(int i=0;i<no;i++)
	{
		printf("enter value[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("enter size of 2nd array:");
	scanf("%d",&no1);
	
	int arr1[no1];
	int add_arr[no+no1];
	for(int i=0;i<no1;i++)
	{
		printf("enter value[%d]:",i);
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<no+no1;i++)
	{
		if(i<no)
			add_arr[i]=arr[i];
		else
		{
			add_arr[i]=arr1[j];
			j++;
		}
	}
	for(int i=0;i<no+no1;i++)
	{
		printf("%d\n",add_arr[i]);
	}
}