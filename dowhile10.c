#include<stdio.h>

void main()
{
	char i='A';
	do
	{
		printf("%c[%c]",i,i+32);
		i++;
	}while(i<='Z');
}