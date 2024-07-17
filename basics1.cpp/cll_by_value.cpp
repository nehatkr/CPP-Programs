#include<iostream>
using namespace std;

void changevalue(int z){
    z=100;

}

int main(){

    int a=6;
    changevalue(a); //cll  by value:-values are copy
    cout<<a<<endl;
   
    return 0;
}