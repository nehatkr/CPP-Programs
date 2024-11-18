#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int sumOfMaxSubArray(vector<int> &arr, int n){
    if(n==0){
        return 0;
    }

    int currentSum = arr[0];
    int maximumSum = arr[0];

    for (int i = 1; i < n; i++)
    {
       currentSum = currentSum+arr[i];
       maximumSum=max(maximumSum,currentSum);
       if(currentSum<0) currentSum=0;
    }
    return maximumSum;
    
}