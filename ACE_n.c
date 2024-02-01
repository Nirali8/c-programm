#include <stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("Enter any character :");
    scanf("%c",&ch);
    ch=toupper(ch);
    for(int i=65;i<=ch;i+=2)
        printf("%c ",i);
    
}
