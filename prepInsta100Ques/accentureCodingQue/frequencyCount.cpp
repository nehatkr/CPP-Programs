#include<iostream>
using namespace std;

string helper(string str){
    int arr[26] = {0}; //create a array of 26 size with all element is zeros
    for (int i = 0; i < str.length(); i++)
    {
       arr[str[i]-'0'] += 1; //replace zeros of arr with the frequency of occurance of numbers

    }
    string ans = "";
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]!=0) //check wether the current element is not equal to zero
        {
           char ch = i+97;
           ans += ch;
           ans += to_string(arr[i]);
        }
        
    }
    
    
}