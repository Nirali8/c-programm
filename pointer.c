#include<stdio.h>

void main()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	int* n=&no;
	printf("No = %d\n",no);
	printf("Address of = %p\n",&no);
	printf("Address of = %p\n",n);
	printf("Address of pointer= %p\n",&n);
	printf("Value of pointer = %d\n",*n);
}