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
		if(k>='A'&&k<='Z')
			k=k+32;
		else
			k=k-32;
		printf("\n");
		i++;
	}
}