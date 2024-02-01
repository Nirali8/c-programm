#include <stdio.h>

void main()
{
    int i=1,j=0,k,no;
	printf("Enter any no :");
	scanf("%d",&no);
    k=i+j;
    printf("%d ",k);
    for(int t=1;t<=no;t++)
    {
         printf("%d ",k);
         j=i;
         i=k;
         k=i+j;
    }
}

