#include<stdio.h>

void main()
{
	int i=5;
	while(i>=1)
	{
		int j=5;
		while(j>=1)
		{
			printf("%d",i);
			j--;
		}
		printf("\n");
		i--;
	}
}