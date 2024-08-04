// For N = 8
// handshakes  =  ( (N-1) * N ) / 2  =  ( 8 x 7 )/2  =  28
// Print Result

// C++ program to find the maximum number of handshakesM
#include<iostream>
using namespace std; 

int main()
{

    //fill the code
    int num = 9;

    int total = num * (num-1) / 2; // Combination nC2

    cout<<"For "<<num<<" people there will "<<total<<" handshakes";

    return 0;

}