#include<stdio.h>

void main()
{
	int i=1;
	while(i<=5)
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
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
}