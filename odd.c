#include <stdio.h>

int main()
{
    int no;
    printf("\nEnter any no :");
    scanf("%d",&no);
    for(int i=1;i<=no;i+=2)
        printf("%d\t",i);
	return 0;
}