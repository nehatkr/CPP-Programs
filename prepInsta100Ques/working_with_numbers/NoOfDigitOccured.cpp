// Here, in this page we will discuss the program that count the occurrence of a digit in a given number using C++.
// The input may lie within the range of integer

#include <iostream>
using namespace std;

int main()
{
    int count = 0, digit, num, occuredDigit;
    cout << "Enter the number" << endl;
    cin >> num;
    cout << "Enter the digit to be count in a given number" << endl;
    cin >> occuredDigit;
    while (num)
    {
        digit = num % 10;
        if (occuredDigit == digit)
        {
            count++;
        }
        num = num / 10;
    }
    cout << "Number of repeated digit occured in a given number is : " << count;
    return 0;
}