#include<string.h>
int reverse(int no)
{
    int t=1;
    if(no<0)
    {
        if(no == -2147483648)
            return 0;
        t=-1;
        no*=t;
    }
   long rev =0;
   int rem;
	while(no>0)
	{
         if((10 * rev) >= 2147483647l)
            return 0;
		rem = no%10;
		rev = rev*10+rem;
		no /=10;
	}
	return rev*t;
    
}