#include<stdio.h>

void main()
{
	char i='A';
	
	while(i<='Z')
	{
		printf("%c [%c] ",i,i+32);
		i++;
	}
}