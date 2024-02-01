#include <stdio.h>
#include<ctype.h>
int main()
{
    char k='a';
   for(char i='A';i<='E';i++)
   {
       k=tolower(k);
       for(char j='A';j<=i;j++)
       {
           printf("%c",k++);
            if(isupper(k))
                k=tolower(k);
            else
                k=toupper(k);
       }
        printf("\n");
   }

    return 0;
}
