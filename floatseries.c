#include <stdio.h>

void main()
{
    int no,i;
    float temp=0.5,diff=0.5;
   printf("enter any no :");
   scanf("%d",&no);
   for(i=1;i<=no;i++)
   {
       printf("%.1f ",temp);
       temp+=diff;
       diff+=1;
   }
}

