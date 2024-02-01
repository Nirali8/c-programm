#include<stdio.h>
int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
int fibonacciSeries(int i)
{
	//printf("i= %d\n",i);
    if (i <= 1)
     {
         return i;
     }
    else
     {
         int t =(fibonacciSeries(i - 1) + fibonacciSeries(i - 2));
         return t;
     }
}
void main()
{
	int no = getno();
	 for(int i = 0; i < no; i ++)
		printf("%d ",fibonacciSeries(i));
}