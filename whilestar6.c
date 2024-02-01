#include<stdio.h>

void main()
{
	int i=1,k=1;
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			printf("%d",k);
			k++;
			j++;
		}
		printf("\n");
		i++;
	}
}
