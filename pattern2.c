#include <stdio.h>

int main()
{
	int no=1;
   for(int i=1;i<=4;i++)
   {
	   for(int j=i;j<4;j++)
			printf(" ");
       for(int j=1;j<=no;j++)
        printf("*");
		no+=2;
       printf("\n");
   }
   no=5;
   for(int i=3;i>=1;i--)
   {
	   for(int j=i;j<4;j++)
			printf(" ");
       for(int j=1;j<=no;j++)
			printf("*");
		no-=2;
       printf("\n");
   }

    return 0;
}
