#include <stdio.h>

int main()
{
    int no;
    printf("\nEnter any no :");
    scanf("%d",&no);
    for(int i=no;i>0;i--)
        printf("%d\t",i);  
	return 0;
}