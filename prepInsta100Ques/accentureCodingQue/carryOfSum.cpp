// A carry is a digit  that is transfered  to the left if the sum of digit is exceed to the 9 while adding two no from right to left
// find number of carry generated
// input:num1:451
// num2:349
// output:2
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findCarry(int num1, int num2){
    int carry=0;
    int count=0;
    while (num1>0 && num2>0)
    {
       int sum = num1%10 + num2%10 + carry; //select one digit
       carry = sum/10;
       if(carry==1){
        count++;
       }
       num1= num1/10; //remove the last digit after addition
       num2=num2/10;
    }
    while (num1>0)
    {
        int sum = num1%10 + carry; //select one digit
       carry = sum/10;
       if(carry==1){
        count++;
       }
       num1= num1/10; //remove the last digit after addition
    }
    while (num1>0)
    {
        int sum = num2%10 + carry; //select one digit
       carry = sum/10;
       if(carry==1){
        count++;
       }
       num2= num2/10; //remove the last digit after addition
    }
    
    return count;
}
int main(){
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    cout<<"Result"<<findCarry(num1,num2);
    return 0;
}

