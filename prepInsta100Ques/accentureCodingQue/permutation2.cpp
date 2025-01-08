// you have given a string s and your task is to find and return the count of permutation formed by fixing the position of vowel present
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int consonant = 0;

    for (int i = 0; i < str.length(); i++)
    {
       if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' ){
        consonant++;

       }
    }
    if(consonant==0){
        cout<<0;
        return 0;
    }
    int fact =1;
    for (int i = 1; i < consonant; i++)
    {
        fact = fact * i;
    }
    cout<<fact;

}