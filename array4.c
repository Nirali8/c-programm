#include<stdio.h>

void main()
{
int no,total_odd=0,total_even=0;
	
	printf("Enter length of array :");
	scanf("%d",&no);
	
	int value[no];
	
	for(int i=0;i<no;i++)
	{
		printf("Enter value %d :",i);
		scanf("%d",&value[i]);
		
		if(value[i]%2==0)
			total_even+=value[i];
		else
			total_odd+=value[i];
	}
	
	printf("total of odd value = %d\n",total_odd);
	printf("total of even value = %d\n",total_even);
}