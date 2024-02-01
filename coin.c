#include<stdio.h>
int getno()
{
	int no;
	printf("Enter no:");
	scanf("%d",&no);
	return no;
}
void coinCount(int arr[],int count,int no)
{
	int temp[50],t=0;
	for(int i=0;i<count;i++)
	{
		while(no>=arr[i])
		{
			temp[t]=arr[i];
			t++;
			no-=arr[i];
		}
	}
	printf("No of coins required = %d \nvalues: ",t);
	for(int i=0;i<t;i++)
		printf("%d ",temp[i]);
}
void main()
{
	int no = getno();
	int count = getno();
	int arr[count];
	printf("Enter coin values:\n");
	for(int i=0;i<count;i++)
	{
		arr[i]=getno();
	}
	coinCount(arr,count,no);
}