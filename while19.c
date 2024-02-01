#include<stdio.h>

void main()
{
	char i='A';
	int temp=1;
	while(i<='Z')
	{
		if(temp%2==0)
			printf("%c ",i+32);
		else	
			printf("%c ",i);
		temp++;
		i+=2;
	}

}