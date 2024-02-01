# include <stdio.h>
void main()
{int N,i,space,x,j,k;

printf("value of N:");
scanf("%d",&N);

for(i=1;i<=N;i++)
{
x=i-1;
for(space=1;space<=N-i;space++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d",j);
}
for(k=1;k<=i-1;k++)
{
printf("%d",x);
x--;
}
printf("\n");
}

}