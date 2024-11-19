// given a string of maximum length 1000 representing a large number , outputs its remainder modulo 11

#include<iostream>
using namespace std;

int helper(string str){
    int rem=0;
    for (int i = 0; i < str.length(); i++)
    {
        int num = rem *10+(str[i]-'0');  //str[i]-'0' gives integer number at [i] => This helps in converting string into integer
        rem = num%11;
    }
    return rem;

}
