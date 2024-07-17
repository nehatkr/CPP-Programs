// print the sum of the first n natural number,whare n is a input.
#include<iostream>
using namespace std;
int main(){
    int n ,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        sum+=i;
        i++;

    }
    cout<<sum<<endl;
    return 0;
}