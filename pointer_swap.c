#include<stdio.h>
int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
void swap(int* no1,int* no2)
{
	*no1=*no1+*no2;
	*no2=*no1-*no2;
	*no1=*no1-*no2;
}
void main()
{
	int no1 = getno();
	int no2 = getno();
	int* n1=&no1;
	int* n2=&no2;
	swap(n1,n2);
	printf("No1 = %d\nNo2 = %d",no1,no2);
}