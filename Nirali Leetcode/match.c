

int numberOfMatches(int n)
{
    int count=0;
     if(n<2)
            return 0;
        else if(n==2)
            return count+1;
    print:
        if(n%2==0)
        {
            count+=n/2;
            n/=2;
        }
        else
        {
            count += (n-1)/2;
            n = (n-1)/2+1;
        }
        if(n<2)
            return 0;
        else if(n==2)
            return count+1;
        else
            goto print;
}