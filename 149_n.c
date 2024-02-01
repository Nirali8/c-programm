#include <stdio.h>

int main()
{
    int no;
    printf("Enter any no :");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
        printf("%d\t",i*i);

    return 0;
}
