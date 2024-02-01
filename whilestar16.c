#include<stdio.h>

void main()
{
	int i=5;
	while(i>=1)
	{
		int j=i;
		while(j<5)
		{
			printf(" ");
			j++;
		}
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
}