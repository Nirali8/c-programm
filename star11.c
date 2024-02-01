#include <stdio.h>
#include<ctype.h>
int main()
{
    char k='A';
   for(char i='A';i<='E';i++)
   {
       for(char j='A';j<=i;j++)
        printf("%c",k++);
       if(isupper(k))
            k=tolower(k);
        else
            k=toupper(k);
        printf("\n");
   }

    return 0;
}
