// you are  given an integer n  ans string s . your task is to find and return  new string  which consist of the original string repeated  N times.
// input= 3  abc
// output= abcabcabc


#include<iostream>
using namespace std;

string repeatString(string str, int n){
    string ans="";
    for (int i = 0; i < n; i++)
    {
        ans= ans + str;
    }
    return ans; 
}
