// calculate the dividor and check wether the divisor are present in the array or not
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> arr, int divisor, int quotient, int remainder , int n){
    int divident = divisor*quotient+remainder;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==divident){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int divisor;
    int remainder;
    int quotient;
    vector<int> v(n,0); 

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>divisor>>remainder>>quotient;
    cout<<helper(v,divisor,quotient,remainder,n);

}