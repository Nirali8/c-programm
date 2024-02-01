#include <stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    int j=2;
    printf("Enter any character :");
    scanf("%c",&ch);
    ch=toupper(ch);
    for(int i=65;i<=ch;i+=2)
    {
        if(j%2==0)
            printf("%c ",i);
        else
            printf("%c ",i+32);
        j++;
    }
    
}
