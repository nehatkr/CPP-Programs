// conversion of binary number into decimal number system.
#include<iostream>
using namespace std;
int main(){
    int n,ans,power=1;
   cout<<"Enter the binary number to convert into decimal";
   cin>>n;
   while (n>0)
   {
    int lastdigit = n % 10; //for taking last digit
    ans = ans + (lastdigit*power); //multiplying the last digit with the power of 2
    power*=2;
    n/=10; //for removing the last digit
   }
   cout<<ans<<endl;
    return 0;
}