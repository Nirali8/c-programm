#include<stdio.h>
struct Student 
{
	int id;
	char name[15];
	int marks[5];
	int total;
	float perc;
}s[5];
int getid(int id)
{
	int no;
	printf("Enter id for student %d:",id+1);
	scanf("%d",&no);
	return no;
}
void getname(int i)
{
	printf("Enter Name for student %d:",i+1);
	scanf("%s",&s[i].name);
}
int getmarks(int i)
{
	int no;
	printf("Enter Marks for subject %d:",i+1);
	scanf("%d",&no);
	return no;
}
void getdata()
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=0;
		s[i].id=getid(i);
		getname(i);
		for(int j=0;j<5;j++)
		{
			s[i].marks[j]=getmarks(j);
			sum+=s[i].marks[j];
		}
		s[i].total=sum;
		s[i].perc=sum*100/500;
		printf("\n");
	}
}
void printdata()
{
	printf("id\tName\tsub1\tsub2\tsub3\tsub4\tsub5\ttotal\tpercentage\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t%s\t",s[i].id,s[i].name);
		for(int j=0;j<5;j++)
			printf("%d\t",s[i].marks[j]);
		printf("%d\t%f\n",s[i].total,s[i].perc);
	}
}
void main()
{
	getdata();
	printdata();
}