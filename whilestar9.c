#include<stdio.h>

void main()
{
	char i='A',k='A';
	
	while(i<='E')
	{
		char j='A';
		while(j<=i)
		{
			printf("%c",k);
			k++;
			j++;
		}
		printf("\n");
		i++;
	}
}