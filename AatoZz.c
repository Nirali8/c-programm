#include <stdio.h>

int main()
{
    char j = 'a';
    for(char i='A';i<='Z';i++)
	{
        printf("%c = %c\n",i,j);  
		j++;
	}
	return 0;
}