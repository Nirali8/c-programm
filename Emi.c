#include <stdio.h>
#include<math.h>
int main()
{
    float p,r,n;
    printf("Enter Principle : ");
    scanf("%f",&p);
    printf("Enter rate of intrest : ");
    scanf("%f",&r);
    printf("Enter year : ");
    scanf("%f",&n);
    
    r=(r/12)/100;
    n =n*12;
    double value = pow((1+r),n);
    float emi = (p*r*value)/(value-1);
    
    printf("Emi = %f",emi);
    return 0;
}
