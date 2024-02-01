#include<stdio.h>

void main()
{
	int no=1,k=1,temp=1;
	for(int i=1;i<=5;i++)
   {
	   temp=i;
	   for(int j=i;j<5;j++)
			printf(" ");
       for(int j=1;j<=no;j++)
	   {
		   printf("%d",k);
		   if(k>=temp)
		   {
			   temp--;
			   k--;
		   }
		   else
			   k++;
	   }
		no+=2;
		k=1;
       printf("\n");
   }
}