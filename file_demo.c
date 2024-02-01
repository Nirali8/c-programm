#include<stdio.h>

void main()
{
	FILE *f;
	char name[]="I am nirali ";
	
	/*open in read mode
	f = fopen("hello.txt","r");
	fscanf(f,"%s",name);
	printf("String is = %s",name);*/
	
	//f = fopen("hello.txt","w");write mode
	f = fopen("hello.txt","a");//append mode
	fprintf(f,"%s",name);
}