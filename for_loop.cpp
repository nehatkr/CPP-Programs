// print all the values between 1 to 50 except for the multiple of 3
#include<iostream>
using namespace std;
int main(){
    for (int i=0; i<=50; i++)
    {
        if(i%3==0){
            continue;
        }
    cout<<i<<endl;
    }
    
    return 0;
}