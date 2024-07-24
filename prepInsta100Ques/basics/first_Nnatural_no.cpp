#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i =0; i<=n; i++){
        sum=sum+i;
    }
    cout<<"Sum of first n natural number is:"<<sum<<endl;
    return 0;

}