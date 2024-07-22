#include<iostream>
using namespace std;

int main(){
    int num,fact=1;
    cout<<"Enter the number to find the factorial: "<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    cout<<endl;
    cout<<"Factorial of a give number is: "<<fact;
    return 0;
}