#include<stdio.h>

void main()
{
	int space=1,i,k,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<space-1;j++)
			printf(" ");
		space+=2;
		k=i;
		if(i==5)
			k=i-1;
		for(j=1;j<=k;j++)
			printf("*");
		printf("\n");
	}
	space=6;
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<space;j++)
			printf(" ");
		space-=2;
		k=i;
		if(i==5)
			k=i-1;
		for(j=1;j<=k;j++)
			printf("*");
		printf("\n");
	}
}