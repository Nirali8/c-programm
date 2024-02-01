#include<stdio.h>

void main()
{
	int temp=11;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
			printf("%d ",temp++);
		temp+=5;
		printf("\n");
	}
}