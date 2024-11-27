// you have given numbers from zero to n . A magical number is defined by
// 1. replace 0 with 1 , 1 with 2 in the binary
// 2. sum of modified binary digit is odd means its a magical number

// input: 2 => 10 =>21 =>(2+1)=>3
// output:3
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for (int i = 1; i <= n; i++)
    {
        // convert to binary
        // make 0 -> 1 and 1 -> 2
        // add digits of resultant binary string
        // if sum is odd then the number is a magical number
        int sum=0;
        int x=i;
        while (x>0)
        {
            if(x&1){
                sum=sum+2;
            }else{
                sum=sum+1;
            }
            x = x>>1;
        }
        if(sum%2!=0){
            count++;
        }
        
    }
    cout<<count;
    
}