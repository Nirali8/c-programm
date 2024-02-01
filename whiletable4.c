#include<stdio.h>

void main()
{
	int i=1;
	char k='A';
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("%c",k);
			j++;
		}
		k++;
		printf("\n");
		i++;
	}
}