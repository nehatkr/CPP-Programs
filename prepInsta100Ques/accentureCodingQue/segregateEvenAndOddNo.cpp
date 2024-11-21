#include<iostream>
using namespace std;

void segregateevenAndOdd(int arr[] ,int n){ //n represent the size of an array
    int left=0;
    int right=(n-1);
    while (left<right)
    {
        if (arr[left]%2==1) //if current element is an odd no then swap
        {
            swap(arr[left],arr[right]);
            right--;
        }
        else{
            left++;
        }
    }
    
return ;
}