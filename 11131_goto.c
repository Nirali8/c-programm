#include <stdio.h>

void main()
{
    int count=1,a=1,diff=10;
    start:
        printf("%d ",a);
        a+=diff;
        diff+=10;
        count++;
    if(count<=10)
        goto start;
}

