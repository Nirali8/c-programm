#include<stdio.h>
int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
int reverse(int no)
{
	int rev =0,rem;
	while(no>0)
	{
		rem = no%10;
		rev = rev*10+rem;
		no /=10;
	}
	return rev;
	
}
void main()
{
	int no = getno();
	int rev = reverse(no);
	printf("Reverse no is %d",rev);
}