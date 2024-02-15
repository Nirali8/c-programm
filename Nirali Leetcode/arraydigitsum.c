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
int differenceOfSum(int* nums, int numsSize) 
{
    int c1=0,c2=0;
    for(int i=0;i<numsSize;i++)
    {
        c1+=nums[i];
        c2+=sum(nums[i]);
    }
    if(c1<c2)
        return c2-c1;
    return c1-c2;
}