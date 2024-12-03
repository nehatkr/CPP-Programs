// you are given an string s and your task is to find  and return  the count  of permutation formed by fixing the position of the vowels present 
// if there is no consonent then return 0
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    for (int i = 1; i <= n; i++)
    {
       ans=ans*i;
    }
    return ans;   
}

int helper(string str){
    if(str.length()==0) return 0;
    unordered_map<char,bool> mp;
    mp['A']=true;
    mp['E']=true;
    mp['I']=true;
    mp['O']=true;
    mp['U']=true;
    mp['a']=true;
    mp['e']=true;
    mp['i']=true;
    mp['o']=true;
    mp['u']=true;

    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if(!mp.count(str[i])) count++;
    }
    return factorial(count);
}