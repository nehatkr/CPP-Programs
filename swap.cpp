#include<iostream>
using namespace std;
int main(){
    int a, b; //suppose a=5,b=7
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"You entered number is:-"<<a<<" "<<b;
    a=a+b; //a+b=5+7=12,now a=12
    b=a-b; //b=12-7=5
    a=a-b; //a=12-5=7
    cout<<endl;
    cout<<"Numbers after swaping:-"<<a<<" "<<b; //now a=7 and b=5

    return 0;
}