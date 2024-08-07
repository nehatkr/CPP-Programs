#include<iostream>
using namespace std;

int main(){
    int arr[]={2,7,5,3,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    for (int i = n-1; i >= 0; i--)
    {
       cout<<arr[i]<<","<<endl;
    }
 
    return 0;
}