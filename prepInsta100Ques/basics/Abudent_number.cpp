// Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.

// Ex:- Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6

// The sum of these factors is 16 it is greater than 12
// So it is an Abundant number

#include <iostream>
using namespace std;
int main()
{
    int n , sum = 0;
    cout<<"Enter number:"<<endl;
    cin>>n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum > n)
    {
        cout << n << " is an Abundant Number\n";
        cout << "The Abundance is: " << (sum - n);
    }
    else
        cout << n << " is not an Abundant Number\n";
}
// Time complexity: O(N)
// Space complexity: O(1)