#include<stdio.h>
int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
int cube(int no)
{
	return no*no*no;
}
int armstrong(int no)
{
	int sum =0,rem;
	while(no>0)
	{
		rem = no%10;
		sum+=cube(rem);
		no /=10;
	}
	return sum;
	
}

void main()
{
	int no = getno();
	int arm = armstrong(no);
	if(no==arm)
		printf("No is armstrong");
	else
		printf("No is not armstrong");
}