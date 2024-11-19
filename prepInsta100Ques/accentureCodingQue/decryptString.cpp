// a2b2c2d1  => find string at 5th position => c
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int helper(string str, int n){
   int sum = 0;
    string ans = "";
    for (int i = 1; i <= str.length(); i+2) //skip one index on every iteration
    {
        sum = sum + str[i]-'0';
        if (sum>=n) //check if given position is equel to sum then ans
        {
           ans = ans+str[i-1];
        //    return ans;
        }
        
    }
    return -1;
    
}