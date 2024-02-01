#include<stdio.h>

void main()
{
	int i=1,no;
	float j=0.5,diff=0.5;
	printf("Enter any no :");
	scanf("%d",&no);
	
	do
	{
		printf("%.1f ",j);
		j+=diff;
		diff+=1;
		i++;
	}while(i<=no);
}