int countDigits(int num)
{
    int total=0;
    int rem;
    int no=num;
    while(num>0)
    {
        rem=num%10;
        if(no%rem==0)
            total++;
        num/=10;
    }
    return total;

}