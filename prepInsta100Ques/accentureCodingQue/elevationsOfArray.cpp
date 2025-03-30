// You have an array of length n. where the trile intially ascends then decends forming a single peek.find the value on the peek.
// [1,2,3,4,3,2,1]
#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int peekElement(int n, vector<int> v){
    if(n==0)return 0;
    if(n==1)return v[0];

    if(v[0]>v[1]){ //descending
        return v[0];
    }
    if(v[n-1]>v[n-2]){ //accending
        return v[n-1];
    }
     for (int i = 0; i < n-1; i++)
     {
        if(v[i]>v[i+1]&&v[i]>v[i-1]) return v[i];
     }
     
    return -1;
}