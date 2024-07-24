#include <iostream>
using namespace std;

int main()
{
    int num, digit, reverse = 0;
    cout << "Enter the number: " << endl;
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;  
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    cout << "Reversed number is: " << reverse;

    return 0;
}
