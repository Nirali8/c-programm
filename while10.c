#include<stdio.h>

void main()
{
	char i='a';
	
	while(i<='z')
	{
		printf("%c [%d] ",i,i);
		i++;
	}
}