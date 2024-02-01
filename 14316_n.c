#include <stdio.h>

int main()
{
    int no;
    printf("Enter any no :");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
    {
        if(i%2==0)
            printf("%d\t",i*i);
        else
            printf("%d\t",i);
    }
    return 0;
}
