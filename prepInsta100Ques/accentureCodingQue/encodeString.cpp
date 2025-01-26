// the encoded version  of a english word . you are suppose to write a program to decode the provided string  and find  the original word.
// each alphabet is representing  by a sequence of 1
// string distingush by ocurance of zero
// input: 1011011101111
// output:ABCD

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string helper(string str)
{
    if (str.length() == 0)
    {
        return 0;
    }
    int count = 0;
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            count++;
        }
        else
        {
            if (count > 0)
            {
                ans = ans + (char)(64 + count);
                count = 0;
            }
        }
    }
    if (count > 0)
    {
        ans = ans + (char)(64 + count); //this is done for the last digit of ones
    }
    return 0;
}
