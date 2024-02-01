#include<stdio.h>

int getno()
{
	int no;
	printf("Enter any no:");
	scanf("%d",&no);
	printf("\n");
	return no;
}

void sq_series()
{
	int no = getno();
	for(int i=1;i<=no;i++)
		printf("%d ",i*i);
	printf("\n");
}
void s_14316_n()
{
	int no = getno();
	for(int i=1;i<=no;i++)
	{
		if(i%2==0)
			printf("%d ",i*i);
		else
			printf("%d ",i);
	}
	printf("\n");
}
void table_2()
{
	int no = getno(),temp=2;
	for(int i=1;i<=no;i++)
	{
		if(i==1)
			printf("%d ",i);
		else
		{
			printf("%d ",temp);
			temp*=2;
		}
	}
	printf("\n");
}
void table_2_2()
{
	int no = getno(),temp=2;
	for(int i=1;i<=no;i++)
	{
		if(i==1)
			printf("%d ",i);
		else
		{
			printf("%d ",i*temp);
			temp*=2;
		}
	}
	printf("\n");
}
void fibbo()
{
	int no = getno();
	int t1=0,t2=1,sum=0;
	printf("%d ",t2);
	for(int i=1;i<=no;i++)
	{
		sum=t1+t2;
		printf("%d ",sum);
		t1=t2;
		t2=sum;
	}
	printf("\n");
}
void float_series()
{
	int no = getno(),j=1;
	float d=0.5,i=0.5;
	while(j<=no)
	{
		printf("%.1f ",i);
		i+=d;
		d+=1;
		j++;
	}
}
void main()
{
	sq_series();
	s_14316_n();
	table_2();
	table_2_2();
	fibbo();
	float_series();
}