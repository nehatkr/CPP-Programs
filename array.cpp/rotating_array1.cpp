/* rotate the given array 'a' by k steps ,where k is non- negative.
note:k can be greater then n as well where n is the size of array 'a'.
given array ={1,2,3,4,5}
required array ={4,5,1,2,3}
*/

#include<iostream>
using namespace std;
int main(){

    int array[]={1,2,3,4,5};
    int n=5; //size of array
    int k=2; //2 step rotation
    
    // k can be greater then n
    k = k%n;
    // extra array for storing the value
    int ansarray[5];
    int j=0;
    // inserting last k element in ans array
    for (int i = n-k; i < n; i++)
    {
        ansarray[j++]=array[i];
    }
    // inserting first n-k element in ans array
    for (int i = 0; i <= k; i++)
    {
        ansarray[j++]=array[i];
    }
    // for printing the array
    for (int i = 0; i < n; i++)
    {
       cout<<ansarray[i]<<" ";

    }
    
    
}
