#include <stdio.h>

int main()
{
    float celc,feren;
    printf("Enter Ferenhit : ");
    scanf("%f",&feren);
    celc = (feren - 32 ) / 1.8;
    printf("Celcius  = %f",celc);
    return 0;
}
