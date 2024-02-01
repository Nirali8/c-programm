#include<stdio.h>

int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	printf("\n");
	return no;
}
int loop()
{
	int no = getno(),sum=0;
	for(int i=no;i>0;i--)
	{
		printf("%d\t",i);
		sum+=i;
	}
	printf("\n");
	return sum;
}
int loop1()
{
	int no = getno(),sum=0;
	for(int i=1;i<=no;i++)
	{
		printf("%d\t",i);
		sum+=i;
	}
	printf("\n");
	return sum;
}
void loop2()
{
	for(int i=51;i<100;i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
}
void loop3()
{
	int no = getno();
	for(int i=-no;i<=no;i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
}
int odd_loop()
{
	int no = getno(),sum=0;
	for(int i=1;i<=no;i+=2)
	{
		printf("%d\t",i);
		sum+=i;
	}
	printf("\n");
	return sum;
}
int even_loop()
{
	int no = getno(),sum=0;
	for(int i=2;i<=no;i+=2)
	{
		printf("%d\t",i);
		sum+=i;
	}
	printf("\n");
	return sum;
}
void main()
{
	
	loop2();
	loop3();
	printf("\ntotal of no :%d",loop());
	printf("\ntotal of no :%d",loop1());
	printf("\nTotal of odd: %d",odd_loop());
	printf("\nTotal of Even: %d",even_loop());
	
}