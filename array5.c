#include<stdio.h>

void main()
{
	
	int no,sum=0;
	
	printf("Enter length of array :");
	scanf("%d",&no);
	
	int value[no];
	
	for(int i=0;i<no;i++)
	{
		printf("Enter value %d :",i);
		scanf("%d",&value[i]);
		sum+=value[i];
	}
	printf("\n total = %d",sum);
}