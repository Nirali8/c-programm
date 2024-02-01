#include <stdio.h>

int main()
{
    int no;
    printf("\nEnter any no :");
    scanf("%d",&no);
    for(int i=-no;i<=no;i++)
        printf("%d\t",i);
	return 0;
}