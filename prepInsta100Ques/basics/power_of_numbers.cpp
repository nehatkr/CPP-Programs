// Only works when exponent is integer
// using recursion
#include<iostream>
using namespace std;

double power(double base, int exp) {
    if (exp > 0)
        return (power(base, exp - 1) * base);
    else if (exp < 0)
        return (power(base, exp + 1) / base);
    else
        return 1;
}

int main() 
{
   
    int expo;
    double base;
    cin>>base;
    cout<<endl;
    cin>>expo;
    
    
    cout << "Result = " << power(base, expo);
    
    return 0;
}