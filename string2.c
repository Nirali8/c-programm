#include<stdio.h>

void main()
{
	char name[50],name1[50];
	int i=0,j=0,k=0,l=0;
	
	printf("Enter any string:");
	gets(name);
	printf("Enter any string:");
	gets(name1);
	while(name[i]!='\0')
		i++;
	while(name1[j]!='\0')
		j++;
	char name2[i+j+1];
	i--;
	while(i>=0)
	{
		name2[l]=name[l];
		l++;
		i--;
	}
	j--;
	while(j>=0)
	{
		name2[l]=name1[k];
		k++;
		l++;
		j--;
	}
	name2[l]='\0';
	puts(name2);
}	
	
	