int numberOfSteps(int num)
{
    int count=0;
    print:
        if(num%2==0)
            num/=2;
        else
            num-=1;
        count++;
        if(num==0)
            return count;
        else
            goto print;
}