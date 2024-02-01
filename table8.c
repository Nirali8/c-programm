#include<stdio.h>

void main()
{
	char temp='A';
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
			printf("%c",temp++);
		printf("\n");
	}
}