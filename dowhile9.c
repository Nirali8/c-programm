#include<stdio.h>

void main()
{
	char i='A';
	do
	{
		printf("%c[%d]",i,i);
		i++;
	}while(i<='Z');
}