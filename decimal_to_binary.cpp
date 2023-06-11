// conversionof decimal to binary number system.
#include<iostream>
using namespace std;
int main(){
    int n,ans,power=1;
   cout<<"Enter the binary number to convert into decimal";
   cin>>n;
   while (n>0)
   {
    int paritydigits = n % 2; //for taking paritydigit
    ans = ans + (paritydigits*power); //multiplying the last digit with the power of 10
    power*=10;
    n/=2; //every steps divide by 2
   }
   cout<<ans<<endl;
    return 0;
}