#include <stdio.h>

int main()
{
    char k;
   for(char i='A';i<='E';i++)
   {
       k=i;
       for(char j='A';j<=i;j++)
        printf("%c",k--);
        printf("\n");
   }

    return 0;
}
