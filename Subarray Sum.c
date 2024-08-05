#include<stdio.h>
#include<stdbool.h>

bool checkSubarraySum(int* nums, int numsSize, int k) {
    int sum = 0;
    for (int i = 0 ; i< numsSize ; i++)
    {
        sum = *(nums + i) + *(nums + i + 1);
        for(int j = i+2 ; j< numsSize ; j++)
        {
            if(sum == k)
            {
                return true;
            }
            sum += *(nums + j); 
        }
    }
    return false;
}
int main ()
{
    int nums[] = {23,2,4,6,7};
    int k = 13 , numsSize = 5, n;
    n = checkSubarraySum(nums , numsSize , k);
    printf("%d",n);
    return 0;
}