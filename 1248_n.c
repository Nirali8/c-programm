#include <stdio.h>
#include<math.h>
int main()
{
    int no,temp=1;
    printf("Enter any no :");
    scanf("%d",&no);
    for(int i=0;i<=no;i++)
    { 
        /*printf("%d ",temp);
        temp*=2;*/
		printf("%.0f ",pow(2,i));
    }
    return 0;
}
