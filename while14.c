#include<stdio.h>

void main()
{
	int i=1,no;
	
	printf("Enter any no :");
	scanf("%d",&no);
	
	while(i<=no)
	{
		if(i%2==0)
			printf("%d ",i*i);
		else	
			printf("%d ",i);
		i++;
	}
}