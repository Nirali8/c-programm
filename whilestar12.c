#include<stdio.h>

void main()
{
	char i='A',k='A';
	
	while(i<='E')
	{
		char j='A';
		if(k>'A'&&k<='Z')
				k=k+32;
		while(j<=i)
		{
			
			printf("%c",k);
			k++;
			if(k>='A'&&k<='Z')
				k=k+32;
			else
				k=k-32;
			j++;
		}
		
		printf("\n");
		i++;
	}
}