#include <iostream>
using namespace std;

int maxSubArray(int *nums, int numsSize)
{
    int count_sum = 0;
    int max = INT_MIN;
    for (int i = 0; i < numsSize; i++)
    {
        count_sum += nums[i];
        if (max < count_sum)
            max = count_sum;
        if (count_sum < 0)
        {
            count_sum = 0;
            continue;
        }
    }
    return max;
}

int main()
{
    int arrSize = 7;
    int arr[] = {3, 4, -7, 1, 3, 3, 1, -4};
    cout<<"max:"<<maxSubArray(arr,arrSize);
    return 0;
}