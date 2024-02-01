#include <stdio.h>

int main()
{
    int r;
    float pi=3.14;
    printf("Enter radius : ");
    scanf("%d",&r);
    printf("Area of circle = %f\n",pi*r*r);
    printf("Perimeter of circle = %f",2*pi*r);
    return 0;
}
