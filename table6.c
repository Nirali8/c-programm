#include<stdio.h>

void main()
{
	int odd=1;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
			printf("%d",odd);
		odd+=2;
		printf("\n");
	}
}