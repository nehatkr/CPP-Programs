#include<iostream>
using namespace std;
int main(){
    int exp1=true;
    int exp2=false;

    cout<<(exp1&&exp2)<<endl; //false(0)
    cout<<(exp1||exp2)<<endl; //true(1)
    cout<<(!exp1)<<endl; //false(0)

    int num1=6;
    int num2=3;
    num1+=3;
    cout<<num1<<endl; //6+3=9
    num2-=2;
    cout<<num2<<endl; //3-2=1
    

    return 0;
}