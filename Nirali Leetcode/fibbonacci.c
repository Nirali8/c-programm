

int fib(int n)
{
    int i =n;
    if (i <= 1)
     {
         return i;
     }
    else
     {
         int t =(fib(i - 1) + fib(i - 2));
         return t;
     }
}