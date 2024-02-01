#include<stdio.h>
int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	return no;
}
int perfect(int no)
{
	int sum=0;
	for(int i=1;i<no;i++)
	{
		if(no%i==0)
			sum+=i;
	}
	return sum;
}
void main()
{
	int no = getno();
	int sum = perfect(no);
	if(sum==no)
		printf("%d is perfect no",no);
	else
		printf("%d is not perfect no",no);
}