#include<stdio.h>

void main()
{
	int i=1;
	int k=2;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("%d",k);
			j++;
		}
		k+=2;
		printf("\n");
		i++;
	}
}