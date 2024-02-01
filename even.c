#include <stdio.h>

int main()
{
    int no;
    printf("\nEnter any no :");
    scanf("%d",&no);
    for(int i=2;i<=no;i+=2)
        printf("%d\t",i);
	return 0;
}