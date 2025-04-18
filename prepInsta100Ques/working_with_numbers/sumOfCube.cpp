// sum of cube of number between a range
#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int sum=0;
    for (int i = N; i <= M; i++)
    {
        sum = sum + (i*i*i);
    }
    cout<<"sum of cube"<<sum;
    return 0;
}