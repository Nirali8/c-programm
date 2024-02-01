#include <stdio.h>

int main()
{
    char k='A';
   for(char i='A';i<='E';i++)
   {
       for(char j='A';j<=i;j++)
        printf("%c",k++);
       if(k>='A'&&k<='Z')
            k=k+32;
        else
            k=k-32;
        printf("\n");
   }

    return 0;
}
