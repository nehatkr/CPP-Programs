// given n string as input and a S string given.
// if S is present in above n string , return yes and no
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int helper(vector<string> arr, int n, string s){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==s) return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    vector<string> arr(n,"");
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    string s;
    cin>>s;
    if(helper(arr,n,s)){
        cout<<"yes";
    }else{
        cout<<"No";
    }
    return 0;
    
}