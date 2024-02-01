#include <stdio.h>

int main()
{
    int age;
    printf("Enter Age of person : ");
    scanf("%d",&age);
    if(age>=18)
         printf("Person is eligible for voting");
    else
        printf("Person is not eligible for voting");
    return 0;
}
