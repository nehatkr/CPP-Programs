#include<iostream>
using namespace std;
int main(){
    int n,reverse=0;
    cout<<"Enter the number:-";
    cin>>n;
    while (n>0)
    {
       int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
       n = n/10;
    }
    cout<<"Reverse of number";
    cout<<reverse;
    return 0;
}