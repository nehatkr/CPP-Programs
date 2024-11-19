// n represents the number of stairs
// m represents the number of jumps

#include<iostream>
using namespace std;

int total_jumps(int n , int m){
    return ((n/m)+(n%m)); //n/m represents no of m jumps and n%m represents no of 1 jumps
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    total_jumps(n,m);
}