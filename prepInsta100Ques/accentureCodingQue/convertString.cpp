// convert s1 to s2
// if letter is removed from s1 then cost is 0
// if letter is swaped from s1 then the cost is 0
// if new letter is added to the s1 then the cost is 1
// s1 and s2 are in upper case letter
#include<iostream>
using namespace std;
#include <bits/stdc++.h>


int isTransformation(string s1, string s2){
    unordered_map<char,int> mp; //using map
    int count =0;
    for (int i = 0; i < s2.length(); i++)
    {
        mp[s2[i]]++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if(mp.count(s1[i]) && mp[s1[i]]>0){
            mp[s1[i]]--;
        }
    }
    
    for(auto m:mp){
        count = count + m.second;
    }
    return count;
}