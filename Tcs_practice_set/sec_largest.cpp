#include<iostream>
using namespace std;
//  for second lagest
int main(){
int largest=INT_MIN;
int secLargest=INT_MIN;
int arr[] = {4,-1,0,1,6,2};
for (int i = 0; i < 5; i++)
{
    if (arr[i]>largest)
    {
        largest = arr[i];
    }
    
}
for (int i = 0; i < 5; i++)
{
    if (arr[i]>secLargest && arr[i] != largest)
    {
        secLargest=arr[i];
    } 
}

cout<<"second largest element: "<<secLargest;
return 0;


}