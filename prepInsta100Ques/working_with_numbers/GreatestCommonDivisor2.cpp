#include<iostream>
using namespace std;

// Using Recursive Euclidean Algorithm (Repeated Subtraction)
int calcGCD(int n1, int n2)
{
    // Takes care of the case n1 is 0
    // We have given explanation above
    if (n1 == 0)
       return n2;
    
    // Takes care of the case n2 is 0
    // We have given explanation above
    if (n2 == 0)
       return n1;
  
    // base case
    if (n1 == n2)
        return n1;
  
    // n1 is greater
    if (n1 > n2)
        return calcGCD(n1 - n2, n2);

    // n2 is greater
    return calcGCD(n1, n2 - n1);
}

int main()
{
    int n1 = 45, n2 = 18;

    int gcd = calcGCD(n1, n2);
    
    cout<<"The GCD is : "<<gcd;
    
    return 0;
}