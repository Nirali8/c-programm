#include<stdio.h>

char get()
{
	char ch;
	printf("Enter any char:");
	scanf("%c",&ch);
	return ch;
}
void star(char ch)
{
	for(char i='A';i<=ch;i++)
	{
       for(char j='A';j<=i;j++)
        printf("%c",j);
        printf("\n");
	}
}
void star1(char ch)
{
	char t='A';
	for(char i='A';i<=ch;i++)
	{
       for(char j='A';j<=i;j++)
        printf("%c",t++);
        printf("\n");
	}
}
void star2(char ch)
{
	for(char i='A';i<=ch;i++)
	{
       for(char j=i;j>='A';j--)
        printf("%c",j);
        printf("\n");
	}
}
void star3(char ch)
{
	char k='A';
   for(char i='A';i<=ch;i++)
   {
       for(char j='A';j<=i;j++)
        printf("%c",k++);
       if(k>='A'&&k<='Z')
            k=k+32;
        else
            k=k-32;
        printf("\n");
   }

}
void star4(char ch)
{
	char k='a';
   for(char i='A';i<=ch;i++)
   {
       if(k>='A'&&k<='Z')
                k=k+32;
       for(char j='A';j<=i;j++)
       {
           printf("%c",k++);
            if(k>'A'&&k<='Z')
                k=k+32;
            else
                k=k-32;
       }
        printf("\n");
   }
}
void main()
{
	char ch=get();
	star(ch);
	star1(ch);
	star2(ch);
	star3(ch);
	star4(ch);
}