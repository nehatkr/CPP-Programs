// This code calculate the total number of branches in the magical tree after N stages using the given formula
// F(N) = F(N-1).F(N-2).2

#include<iostream>
using namespace std;
int totalBranches(int N){
    if(N==1) return 1;
    if(N==2) return 2;
    int F1=1,F2=2,total=F1*F2;
    for (int i = 3; i <= N; i++)
    {
       int current = F1*F2*2;
       total = total+current;
       F1=F2;
       F2=current;
    }
    return total;
    
}

int main(){
    int N;
    cin>>N;
cout<<totalBranches(N)<<endl;
    return 0;
}