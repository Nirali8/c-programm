#include<stdio.h>

void main()
{
	int i=1;
	while(i<=5)
	{
		int j=5;
		while(j>=i)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
}