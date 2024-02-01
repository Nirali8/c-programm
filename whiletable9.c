#include<stdio.h>

void main()
{
	int i=1;
	int k=11;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("%d ",k);
			j++;
			k++;
		}
		k+=5;
		printf("\n");
		i++;
	}
}