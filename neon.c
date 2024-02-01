#include<stdio.h>
/*Neon Number ( i.e. a number where the 
sum of digits of the square of 
the number is equal to the number )
no 9
9*9 = 81--> 8+1=9*/
int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
int square(int no)
{
	return no*no;
}
int sum(int no)
{
	int rem,total=0;
	while(no>0)
	{
		rem = no%10;
		total+=rem;
		no/=10;
	}
	return total;
}
void main()
{
	int no = getno();
	int sq= square(no);
	int s = sum(sq);
	if(s==no)
		printf("no is neon no");
	else
		printf("no is not neon no");
}