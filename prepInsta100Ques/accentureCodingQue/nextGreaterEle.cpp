// using stack based approach
// [4,5,2,25,0]

#include<iostream>
using namespace std;

void nextGreaterEle(int n,int arr[]){
    int i,j,next;
    for ( i = 0; i < n; i++)
    {
       next=-1;
       for ( j = i+1; j <n ; j++)
       {
        if(arr[i]<arr[j]){
            next=arr[j];
            break;
        }
       }
       cout<<arr[i]<<"-->"<<next<<endl;
    }
    
}

int main(){
int arr[]={4,5,2,25};
int n=sizeof(arr)/sizeof(arr[0]);

nextGreaterEle(n,arr);
 return 0;
}