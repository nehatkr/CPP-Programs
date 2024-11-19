#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 int res = INT_MIN;
    int sumOfMaxSubArray(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < arr.size(); j++)
            {
                sum = sum+arr[j];
            }
            res = max(res,sum);
        }
        return res;
    }


int main()
{
   vector<int> arr = {1,2,7,-4,-1,8,4,3,-8,9};
   cout<<sumOfMaxSubArray(arr);
    return 0;
}