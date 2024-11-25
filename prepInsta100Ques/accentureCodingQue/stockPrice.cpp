// each element in an integer array A of size n representing the closing price of the market.
// find and return an integer value representing the total number of days where the stock market is decreased
// input: 7    5 6 4 5 2 3 4
// output: 2
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int negativeGrowth(int n,vector<int> v){
    if(n==0 or n==1) return 0;

    int count=0;
    for (int i = 1; i < n; i++)
    {
        if(v[i]<v[i-1]){
            count++;
        }
    }
    return count;
    
}