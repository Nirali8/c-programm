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
    
    double value = pow((1+r/100),n);
    float amt = p * value;
    float ci = amt-p;
    printf("Ci  = %f\n Amount = %f",ci,amt);
    return 0;
}
