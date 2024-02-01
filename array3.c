#include<stdio.h>

void main()
{
	int no,total_odd=0,total_even=0;


	printf("Enter lengthof array :");
	scanf("%d",&no);

	int value[no];

	for(int i=0;i<no;i++)
	{
		printf("Enter value : %d :",i);
		scanf("%d",&value[i]);
		if(i%2==0)
			total_even+=value[i];
		else
			total_odd+=vazlue[i];
	}

	printf("\n sum of odd posiotion = %d",total_odd);
	printf("\n sum of even posiotion = %d",total_even);
}