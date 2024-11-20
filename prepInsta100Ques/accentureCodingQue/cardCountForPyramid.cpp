#include<iostream>
using namespace std;

int cardCount(int n){
    if(n==0) return 0;
    if(n==1) return 2;

    int arr[n+1]; //we have taking n+1 bcz if we take n then it will return the number of card upto n-1 thats why we have taken n+1=>n+1-1=n
    arr[0]=0;
    arr[1]=2;
    for (int i = 2; i <= n; i++)
    {
       
       arr[i] = ((2*i) + (i-1) + arr[i-1]) % 1000007;  //this represent total number of card that is required for forming the current level pyramid
    }
    return arr[n]; //return the no of card required for forming the nth level pyramid
}