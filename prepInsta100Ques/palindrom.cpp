#include <iostream>
using namespace std;

int main()
{
    int  digit, reverse = 0, num,temp;
    cout << "Enter the number to check whether this number is palindrom or not: " << endl;
    cin >> num;
    temp=num;
    cout << "The given number is: " << num << endl;
    while (temp != 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
    cout << "The reverse of the given number is: " << reverse << endl;

    if (reverse==num)
    {
        cout << "The given number is a palindrom" << endl;
    }
    else
    {
        cout << "The given number is not a palindrom"<<endl;
    }
    return 0;
}