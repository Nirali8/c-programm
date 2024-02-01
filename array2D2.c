#include<stdio.h>

void main()
{
	int no,u_sum=0,l_sum=0,d_sum=0;
	printf("Enter value for array size:");
	scanf("%d",&no);
	int arr[no][no];
	for(int i=0;i<no;i++)
	{
		for(int j=0;j<no;j++)
		{
			printf("Enter value for [%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);

			if(i==j)
				d_sum+=arr[i][j];
			else if(i<j)
				u_sum+=arr[i][j];
			else
				l_sum+=arr[i][j];
		}
		printf("\n");
	}
	for(int i=0;i<no;i++)
	{
		for(int j=0;j<no;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

	printf("\nSum of diagonal value = %d\n",d_sum);
	printf("Sum of Upper Triagonal value = %d\n",u_sum);
	printf("Sum of Lower Triagonal value = %d\n",l_sum);
}