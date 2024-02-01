#include<stdio.h>

void main()
{
	int i,k=2;
	for(i=1;i<=15;i++)
	{
		if(i==1)
			printf("%d ",i);
		else
		{
			printf("%d ",i*k);
			k*=2;
		}
			
	}
}