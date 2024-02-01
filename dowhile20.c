#include<stdio.h>

void main()
{
	char i='A';
	int temp=1;
	do
	{
		if(temp%2==0)
			printf("%c ",i+32);
		else	
			printf("%c ",i);
		temp++;
		i+=2;
	}while(i<='Z');

}