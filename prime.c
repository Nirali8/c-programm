#include<stdio.h>
int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
int prime(int no)
{
	int flag=0;
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
			flag=1;
	}
	return flag;
}
void main()
{
	int no = getno();
	if(prime(no))
		printf("no is not prime");
	else
		printf("no is prime");
}