#include<stdio.h>
//sum of factorial of digit is = digit
int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
int factorial(int no)
{
	int fact=1;
	for(int i=1;i<=no;i++)
		fact*=i;
	return fact;
}
int sum(int no)
{
	int total=0,rem;
	while(no>0)
	{
			rem=no%10;
			total+=factorial(rem);
			no/=10;
	}
	return total;
}

void main()
{
	int no = getno();
	int s = sum(no);
	if(s==no)
		printf("%d is strong no",no);
	else
		printf("%d is not strong no",no);
}