// Given an array of length N  and he wants to find the sum of even positions after reversing the array.
// your task is to find and return an integer value representingsum of the  array elements  present at the even index of reversed array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int helper(int n, vector<int> v){
    if(n==0) return 0;
    int i=0;
    int j=n-1;
    while (i<=j)
    {
        swap(v[i],v[j]);
        i++;
        j--;

    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            sum= sum+v[i];
        }
    }
    
    return sum;
}