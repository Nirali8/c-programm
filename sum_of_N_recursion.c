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
	if(no<=0)
		return 0;
	else
		return no+sum(no-1);
}
void main()
{
	int no=getno();
	int s = sum(no);
	printf("sum of 1 to %d = %d",no,s);
}