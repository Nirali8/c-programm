#include <stdio.h>

int getno()
{
    int no;
   printf("Enter value:");
   scanf("%d",&no);
   return no;
}
void loop(int no)
{
    for(int i=1;i<=no;i++)
        printf("%d ",i*i);
}
void loop1(int no)
{
    for(int i=1;i<=no;i++)
    {
        if(i%2==0)
            printf("%d ",i*i);
        else
             printf("%d ",i);
    }
}
void loop2(int no)
{
    int temp=1;
    for(int i=1;i<=no;i++)
    {
        if(i==1)
            printf("%d ",i);
        else
            printf("%d ",temp);
        temp*=2;
    }
}
float si(int p,int r,int n)
{
	return (p*r*n)/100;
}
void main()
{
    int p=getno();
	int r=getno();
	int n=getno();
	printf("Simple intrest = %f",si(p,r,n));
   
}
