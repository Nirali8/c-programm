#include<stdio.h>

void main()
{
	int row,col,sum=0;
	
	printf("Enter no of row:");
	scanf("%d",&row);
	printf("Enter no of Column:");
	scanf("%d",&col);
	
	int arr[row][col];
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("Enter value for [%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		printf("\n");
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nSum of total value = %d",sum);
}
