// we have 2 player a ans b and b should win always
#include<iostream>
using namespace std;
int main(){
    string playerA;
    cin>>playerA;

    if(playerA=="rock"){
        cout<<"paper";
    }else if(playerA=="paper"){
        cout<<"scissors";
    }
    else{
        cout<<"rock";
    }
    return 0;
}
