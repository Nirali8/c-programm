#include <stdio.h>

int main()
{
	int no,sum=0;
	printf("\nEnter any no :");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
        sum+=i;
	printf("Sum = %d",sum);
	return 0;
}