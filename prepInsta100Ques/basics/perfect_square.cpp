// Today in this article we will discuss the program to check for perfect square in C++ programming language. 
// We are given with an integer number and need to print “True” if it is, otherwise “False”
// input: 25
// 5*5=25=25(perfect sqr)

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long double num;
    long long sqr=0;
    cout<<"Enter the number to check weather the given number is a perfect square or not: ";
    cin>>num;
    sqr = sqrt(num);

    if(sqr*sqr==num){
        cout<<"Given number is a perfect square!"<<endl;
    }else{
        cout<<"Given number is not a perfect square!";
    }
    return 0;
}