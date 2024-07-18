#include <iostream>
using namespace std;

int main()
{
    int num1, num2, largest;
    cout << "Enter the numbers:" << endl;
    cin >> num1 >> num2;
    if (num1 == num2)
    {
        cout << "Both the provided number is equal" << endl;
    }
    else
    {
        largest = num1 > num2 ? num1 : num2;
        cout << "lagrest number :" << largest;
    }
    return 0;
}