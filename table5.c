#include<stdio.h>

void main()
{
	int even=2;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
			printf("%d",even);
		even+=2;
		printf("\n");
	}
}