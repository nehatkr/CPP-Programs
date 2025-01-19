// A googly prime number is defined as  a number is derived from the sum of individual digits.
// ex: if n= 34 then 3+4=7 is a googly prime no
// input: 43  outout:yes
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string helper(int n){
    if(n==0 or n==1){
        return "NO";
    }
    int sum=0;
  while (n>0)
  {
   int r = n%10;
    sum = sum+r;
    n=n/10;
  }
  bool isPrime=true;
  for(int i=2; i<=sqrt(sum); i++){
    if(sum%i==0){
        isPrime=false;
        break;
    }
  }
  return isPrime? "yes":"no";
  
    
}