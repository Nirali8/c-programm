#include<stdio.h>

int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
int sum(int no)
{
	int total=0,rem;
	while(no>0)
	{
			rem=no%10;
			total+=rem;
			no/=10;
	}
	return total;
}
void main()
{
	int no = getno();
	printf("Sum of digit = %d",sum(no));
}