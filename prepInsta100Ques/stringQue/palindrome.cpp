#include<iostream>
#include<string.h>
using namespace std;

int isPalindrome(string & s){

    int left=0;
    int right=s.length()-1;
while (left < right)
{
    if (s[left] != s[right])  //no palindrome
    {
        return 0;
    }
    left++;
    right--;

    
}
// the string is Palindrome
return 1;
    
}

int main(){
    string s = "abba";
    cout<<isPalindrome(s) <<endl;
    return 0;
}