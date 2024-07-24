// Strong Numbers is a number in which the sum of the factorial of individual digits of the numbers is equal to the number itself.
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int strongDigit(int num)
{
    int digit, sum = 0;
    int temp = num;

    // calculate 1! + 4! + 5!
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + factorial(digit);
        temp /= 10;
    }
    // returns 1 if both equal else 0

    return sum == num;
}

int main()
{
    int x;
    cin >> x;
    if (strongDigit(x))
    {
        cout << "The given number is a strong number!" << endl;
    }
    else
    {
        cout << "The given number is not a strong number!";
    }

    return 0;
}