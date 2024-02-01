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
    
    float si = p*r*n/100;
    float amt = si+p;
    printf("si  = %f\n Amount = %f",si,amt);
    return 0;
}
