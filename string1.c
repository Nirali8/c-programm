#include<stdio.h>

void main()
{
	char name[50];

	printf("Enter any string:");
	gets(name);

	int i=0;
	while(name[i]!='\0')
		i++;

	printf("Length of string = %d",i);
}