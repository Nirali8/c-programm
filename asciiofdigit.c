#include <stdio.h>

void main()
{
    int count;
    count = '0';
    start:
        printf("%c[%d] ",count,count);
    count++;
    if(count<='9')
        goto start;
}

