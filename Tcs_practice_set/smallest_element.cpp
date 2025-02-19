#include<iostream>
using namespace std;

int main(){
    int smallest=INT_MAX ;
    int arr[]={2,5,1,3,0,6,8,-1};
    for (int i = 0; i <= 7; i++)
    {
        // if (arr[i]<smallest)
        // {
        //    smallest=arr[i];
        // }
        smallest = min(smallest,arr[i]);

    }
    cout<<"smallest element: "<<smallest;
    return 0;
}