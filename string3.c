#include<stdio.h>

void main()
{
	char name[50];
	int i=0;
	int j=0;
	
	printf("Enter any string:");
	gets(name);
	
	while(name[i]!='\0')
		i++;
	
	char name1[i+1];
	
	i--;
	while(i>=0)
	{
		name1[j]=name[i];
		j++;i--;
	}
	name1[j]='\0';
	printf("reverse nstring = ");
	puts(name1);
}