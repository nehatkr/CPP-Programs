#include<iostream>
using namespace std;

int main(){
    int arr[]={2,7,5,3,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"sum of given array: "<<sum;
    return 0;
}