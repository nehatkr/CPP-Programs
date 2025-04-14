// Given an array of even numbers, check if it can be divisible into subarrays such that the sum of each subarray equals the 
// average sum of the entire array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool canDivide(const vector<int>& arr){
int totalSum =0;
for (int num:arr)
{
    totalSum = totalSum + num;
}

int average = totalSum/2;

int currentSum = 0;
for (int num:arr )
{
    currentSum= currentSum+num;
    if(currentSum == average){
        return true;
    }
}
return false;
}

int main(){
    vector<int> arr = {2,4,6,8};
    if(canDivide(arr)){
        cout<<"true"<<endl;
    }else{
        cout<<"false";

    }
    return 0;
}
