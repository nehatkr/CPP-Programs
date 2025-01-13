// your are given an array of length n . Find and print the element at the mid index array ignoring all index at which negative element are present
// input: 1 -2 3 -4 5 6
// output: 3
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> v, int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
       if(v[i]>0){
        count++;
       }
    }
    int mid_ele = (count + 1)/2; //number of positive no available
    for (int i = 0; i < n; i++)
    {
        if(v[i]>0){ //positive number
            mid_ele--;
            if(mid_ele==0){
                return v[i];
            }
        }
    }
    return -1;
    
    
}