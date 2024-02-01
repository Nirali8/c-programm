#include<stdio.h>

int getno()
{
	int no;
   printf("Enter value:");
   scanf("%d",&no);
   return no;
}
void star(int no)
{
	for(int i=1;i<=no;i++)
	{
		for(int j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
}
void star1(int no)
{
	for(int i=1;i<=no;i++)
	{
		for(int j=no;j>=i;j--)
			printf("*");
		printf("\n");
	}
}
void star2(int no)
{
	for(int i=1;i<=no;i++)
	{
		for(int j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
}
void star3(int no)
{
	for(int i=1;i<=no;i++)
	{
		for(int j=1;j<=i;j++)
			printf("%d",i);
		printf("\n");
	}
}
void star4(int no)
{
	for(int i=no;i>0;i--)
	{
		for(int j=no;j>=i;j--)
			printf("%d",i);
		printf("\n");
	}
}
void star5(int no)
{
	for(int i=no;i>0;i--)
	{
		for(int j=i;j<=no;j++)
			printf("%d",j);
		printf("\n");
	}
}
void star6(int no)
{
	int t=1;
	for(int i=1;i<=no;i++)
	{
		for(int j=1;j<=i;j++)
			printf("%d",t++);
		printf("\n");
	}
}
void star7(int no)
{
	for(int i=no;i>0;i--)
	{
		for(int j=no;j>=i;j--)
			printf("%d",j);
		printf("\n");
	}
}
void star8(int no)
{
	for(int i=1;i<=no;i++)
   {
	   for(int j=i;j<no;j++)
			printf(" ");
       for(int j=1;j<=i;j++)
        printf("*");
       printf("\n");
   }
}
void star9(int no)
{
	for(int i=no;i>=1;i--)
   {
	   for(int j=i;j<no;j++)
		   printf(" ");
       for(int j=1;j<=i;j++)
        printf("*");
       printf("\n");
   }
}
void star10(int no)
{
	for(int i=1;i<=no;i++)
   {
	   for(int j=i;j<no;j++)
			printf(" ");
       for(int j=1;j<=i;j++)
        printf("* ");
       printf("\n");
   }
}
void star11(int no)
{
	for(int i=no;i>=1;i--)
   {
	   for(int j=i;j<no;j++)
			printf(" ");
       for(int j=1;j<=i;j++)
        printf("* ");
       printf("\n");
   }
}
void main()
{
	int no=getno();
	star(no);
	star1(no);
	star8(no);
	star9(no);
	star10(no);
	star11(no);
	star2(no);
	star3(no);
	star4(no);
	star5(no);
	star6(no);
	star7(no);
	
}