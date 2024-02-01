#include<stdio.h>

void main()
{
	char i='A';
	
	while(i<='E')
	{
		char j=i;
		while(j>='A')
		{
			printf("%c",j);
			j--;
		}
		printf("\n");
		i++;
	}
}