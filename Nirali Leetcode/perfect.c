int checkPerfectNumber(int num) 
{
    int no = num;
   int sum=0;
	for(int i=1;i<=no/2;i++)
	{
		if(no%i==0)
			sum+=i;
	}
	if(num==sum)
        return 1;
    else
        return 0;
}