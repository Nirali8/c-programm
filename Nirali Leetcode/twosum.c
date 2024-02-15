int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize=2;
    int *array = (int*)malloc(2 * sizeof(int));
    int i,j;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                array[0]=i;
                array[1]=j;
                return array;
            }
        }
    }
    return 0;
}