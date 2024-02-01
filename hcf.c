#include<stdio.h>

void main()
{
	int no1,no2,hcf,i;
	printf("Enter two nos :");
	scanf("%d %d",&no1,&no2);
	for(int i=1;i<=no1||i<=no2;i++)
	{
		if(no1%i==0&&no2%i==0)
			hcf=i;
	}
	printf("HCF = %d",hcf);
}