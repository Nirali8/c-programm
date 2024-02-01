#include <stdio.h>

int main()
{
    float celc,feren;
    printf("Enter Celcius : ");
    scanf("%f",&celc);
    feren = celc * 1.8 + 32;
    printf("ferenhit  = %f",feren);
    return 0;
}
