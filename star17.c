#include<stdio.h>

void main()
{
	int i,j,space=7;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<=space;j++)
			printf(" ");
		space-=2;
		if(i==5)
		{
			for(j=1;j<i;j++)
				printf("*");
		}
		else
		{
			for(j=1;j<=i;j++)
				printf("*");
		}
		printf("\n");
	}
	space=1;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<=space;j++)
			printf(" ");
		space+=2;
			for(j=1;j<=i;j++)
				printf("*");
		printf("\n");
	}
}