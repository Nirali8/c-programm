#include<stdio.h>

void main()
{
	char i='A';
	
	while(i<='Z')
	{
		printf("%c [%d] ",i,i);
		i++;
	}
}