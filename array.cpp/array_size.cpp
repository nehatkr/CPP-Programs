#include<iostream>
using namespace std;
int main(){
    int array[]={1,5,3,7,5,9};
    cout<<sizeof(array)<<endl; //size of array
    cout<<sizeof(array)/sizeof(array[0])<<endl; //number of element of an array

    return 0;
}