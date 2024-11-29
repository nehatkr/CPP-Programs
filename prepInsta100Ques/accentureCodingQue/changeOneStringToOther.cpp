// given string and two characters ch1 and ch2  as input , replace all occurance of ch1 with ch2 and ch2 whit ch1 in the input string
// input:apples  a  p
// output:paales
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string helper(string str , char ch1 , char ch2){
    if(str.length()==0) return str;
    for (int i = 0; i < str.length(); i++)
    {
       if(str[i]==ch1)  str[i]=ch2;
       else if(str[i]==ch2)  str[i]=ch1;
    }
    return str;
}

int main(){
    string str;
    cin>>str;
    char ch1,ch2;
    cin>>ch1;
    cin>>ch2;
   cout<<helper(str,ch1,ch2);
}
