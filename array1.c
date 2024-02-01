#include<stdio.h>

void main()
{
	
	int value[]={1,3,5,7,9};
	int value1[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter value for index %d :",i);
		scanf("%d",&value1[i]);
	}
	printf("\nValue for array 1");
	for(int i=0;i<5;i++)
		printf("\nvalue = %d",value[i]);
	printf("\nValue for array 2");
	for(int i=0;i<5;i++)
		printf("\nvalue = %d",value1[i]);
}