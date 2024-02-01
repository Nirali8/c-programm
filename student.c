#include<stdio.h>
int mark[3];
float percentage;
int stud()
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		printf("Enter marks for subject %d:",i+1);
		scanf("%d",&mark[i]);
		sum+=mark[i];
	}
	percentage = sum*100/300;
	printf("Percentage = %f\n",percentage);
	if(sum>35)
		return 1;
	else
		return 0;
}
void main()
{
	
	if(stud())
		printf("Student is pass:");
	else
		printf("Student is fail:");
	
}