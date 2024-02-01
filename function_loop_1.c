#include<stdio.h>

void loop()
{
	for(char i ='A';i<='Z';i++)
		printf("%c ",i);
	printf("\n");
}
void loop1()
{
	for(char i ='A';i<='Z';i++)
		printf("%c[%d] ",i,i);
	printf("\n");
}
void loop2()
{
	for(char i ='A',j='a';i<='Z';i++,j++)
		printf("%c[%c] ",i,j);
	printf("\n");
}
void series()
{
	for(char i ='A';i<='Z';i+=2)
		printf("%c ",i);
	printf("\n");
}
void series1()
{
	int t=1;
	for(char i ='A';i<='Z';i+=2)
	{
		if(t%2==0)
			printf("%c ",i+32);
		else
			printf("%c ",i);
		t++;
	}
	printf("\n");
}
void main()
{
	loop();
	loop1();
	loop2();
	series();
	series1();
}