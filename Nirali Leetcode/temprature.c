double* convertTemperature(double celsius, int* returnSize)
{
     *returnSize = 2;
       double * a = malloc ( *returnSize*sizeof(double));
       a[0] = celsius + 273.15;
       a[1] = celsius * 1.80 + 32.00;
  return a;
}