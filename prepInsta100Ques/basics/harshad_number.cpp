// A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.

// For Example : 153
// Sum of digits = 1 + 5 + 3 = 9

// 153is divisible by 9 so 153 is a Harshad Number.


#include <iostream>
using namespace std;

int checkHarshad(int num){
    
    int sum = 0;
    int temp = num;
    
    while(temp != 0){
        sum = sum + temp % 10;
        temp /= 10;
    }
    
    // will return 1 if num is divisible by sum, else 0
    return num % sum == 0;
}

int main ()
{
    int n ;
    cin>>n;
    
    if(checkHarshad(n))
        cout << n << " is a Harshad's number";
    else
        cout << n << " is not a Harshad's number";

    return 0;
}
// Time complexity: O(N)
// Space complexity: O(1)
// Where N is the number of digits in number