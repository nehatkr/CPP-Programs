#include<iostream>
using namespace std;
int main(){

    int p=6;
    int &q=p;
    q++;
    cout<<p<<endl; //call by referance:-actual values are pass
    cout<<&p<<endl;
    cout<<&q<<endl;

    return 0;
}