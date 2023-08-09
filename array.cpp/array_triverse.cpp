#include<iostream>
using namespace std;
int main(){
    int array[]={1,5,4,7,8,3};
    int size = sizeof(array)/sizeof(array[0]);
    // for loop
    for (int idx = 0; idx < size; idx++)
    {
        cout<<array[idx]<<" "<<endl;
    }
    // for each loop
    for (int ele:array){ //it triverse all the element
      cout<<ele<<endl;  
    }
    // while loop
    int index=0;
    while(index<size){
        cout<<array[index]<<endl;
        index++;

    }
    //taking input
    char vowels[5];
    for(int idx=0;idx<5;idx++){
        cout<<"Enter the vowels:-";
        cin>>vowels[idx];
    }
    
    return 0;
}