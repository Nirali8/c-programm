#include <stdio.h>
#include<math.h>
int main()
{
    int no,j=0;
    float temp;
    printf("Enter any no :");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
    {
        temp = pow(2,j);
        j++;
        printf("%.0f ",i*temp);
    }
    return 0;
}
