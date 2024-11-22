// arrange the bits of a number n such that all the setbits come together and gives the minimum possible number that can be form after rearranging
// ex- 10 :- 1001=>0011=3 (minimum possible number)
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int count=0;
 while (n>0)
 {
    if (n&1)
    {
        count++;
    }
    n= n>>1;
    
 }
 int ans=0;
 int power=1;
 for (int i = 0; i < count; i++)
 {
    // 2 set bits = 2^0*1 + 2^1*1;
    ans=ans+power*1;
    power= power*2;
 }
 cout<<ans;

}