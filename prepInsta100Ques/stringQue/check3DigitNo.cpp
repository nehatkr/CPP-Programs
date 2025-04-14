// This program checks whether the given 3-digit number N is divisible by 9
#include<iostream>
using namespace std;

void checkDivisibilityBy9(int N){

    if(N % 9 == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main(){
    int N;
  cin>>N;
  checkDivisibilityBy9(N);
  return 0;
}