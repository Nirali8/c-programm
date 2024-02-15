int commonFactors(int no1, int no2)
{
    int hcf=0;
    for(int i=1;i<=no1||i<=no2;i++)
	{
		if(no1%i==0&&no2%i==0)
			hcf++;
	}
    return hcf;
}