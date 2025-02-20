#include<iostream>
using namespace std;
//  for second lagest
int main(){
int smallest=INT_MAX;
int secSmallest=INT_MAX;
int arr[] = {4,-1,0,1,6,2};
for (int i = 0; i < 5; i++)
{
    if (arr[i]<smallest)
    {
        smallest = arr[i];
    }
    
}
for (int i = 0; i < 5; i++)
{
    if (arr[i]<secSmallest && arr[i] != smallest)
    {
        secSmallest=arr[i];
    } 
}

cout<<" smallest element: "<<smallest<<endl;
cout<<"second smallest element: "<<secSmallest;
return 0;


}