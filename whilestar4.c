#include<stdio.h>

void main()
{
	int i=5;
	while(i>=1)
	{
		int j=i;
		while(j<=5)
		{
			printf("%d",i);
			j++;
		}
		printf("\n");
		i--;
	}
}