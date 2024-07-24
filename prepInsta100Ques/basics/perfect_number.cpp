// A perfect number is a number in which the sum of the proper positive divisors of the number is equal to the number itself.

// For Example: 28
// Divisors : 1 + 2 + 4 + 7 + 14 = 28

// Time complexity: O(N)
// Space complexity: O(1)

#include<iostream>
using namespace std;

int main ()
{
    int num , sum = 0;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    
    int i = 1;
    while(i < num)  
    {
        // check if i is a divisor
        if(num % i == 0)  
            sum = sum + i;
            
        i++;  
    }  
    
    if(sum == num)
        cout << num << " is a perfect number";
    else
        cout << num << " is not a perfect number";
    
    return 0;
}