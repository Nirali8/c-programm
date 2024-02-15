int* rearrangeArray(int* nums, int numsSize, int* returnSize)
{
     int *arr = (int*)malloc(numsSize * sizeof(int));
    int j=0,k=0;
    int a1[numsSize/2],a2[numsSize/2];
    for(int i=0;i<numsSize;i++)
    {
       
        if(nums[i]>0)
        {
            a1[j]=nums[i];
            j++;  
        }
        else
        {
            a2[k]=nums[i];
            k++;
        }
    }
    k=0;
    for(int t=0;t<j;t++)
    {
        arr[k]=a1[t];
        k++;
        arr[k]=a2[t];
        k++;
    }
    *returnSize=numsSize;
    return arr;
}