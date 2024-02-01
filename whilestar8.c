#include<stdio.h>

void main()
{
	char i='A';
	
	while(i<='E')
	{
		char j='A';
		while(j<=i)
		{
			printf("%c",j);
			j++;
		}
		printf("\n");
		i++;
	}
}