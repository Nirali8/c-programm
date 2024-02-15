int subtractProductAndSum(int no)
{
   int total=0,rem,mult=1;;
	while(no>0)
	{
			rem=no%10;
			total+=rem;
            mult*=rem;
			no/=10;
	}
	return (mult-total); 
}