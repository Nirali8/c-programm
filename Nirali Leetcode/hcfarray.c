int findHCF(int no1,int no2)
{
    int hcf=1;
    for(int i=1;i<=no1||i<=no2;i++)
	{
		if(no1%i==0&&no2%i==0)
			hcf=i;
	}
    return hcf;
}
int findGCD(int* nums, int numsSize) 
{
    int low=nums[0];
    int high = nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]<low)
            low=nums[i];
        else if(nums[i]>high)
            high =nums[i];
    }
    return findHCF(low,high);
}