#include <stdio.h>

void main()
{
    char i='a';
    start:
        printf("%c[%d] ",i,i);
    if(i<'z')
    {
        i++;
        goto start;
    }
}

