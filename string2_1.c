#include<stdio.h>

void main()
{
	char name[50],name1[50];
	int i=0,j=0;
	
	printf("Enter any string:");
	gets(name);
	printf("Enter any string:");
	gets(name1);
	while(name[i]!='\0')
		i++;
	while(name1[j]!='\0')
		j++;
	char name2[i+j+1];
	i=0;
	while(name[i]!='\0')
	{
		name2[i]=name[i];
		i++;
	}
	j=0;
	while(name1[j]!='\0')
	{
		name2[i]=name1[j];
		i++;
		j++;
	}
	name2[i]='\0';
	puts(name2);
}	
	
	