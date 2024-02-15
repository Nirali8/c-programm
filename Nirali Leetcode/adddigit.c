int sum(int no)
{
	int total=0,rem;
	while(no>0)
	{
			rem=no%10;
			total+=rem;
			no/=10;
	}
	return total;
}
int addDigits(int num)
{
    int count=num;
    print:
        if(count>9)
        {
                count = sum(count);
                goto print;
        }
        else
            return count;

}