#include<stdio.h>

void main()
{
	int row,col;

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
		}
		printf("\n");
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==0)
				printf(" \t");
			else
				printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

}