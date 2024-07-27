// HCF ( Highest Common Factor ) of two numbers is the largest positive integer that can divide both the numbers

#include <iostream>
using namespace std;

int main()
{
    int hcf = 0;
    int num1, num2;
    cout << "Enter the numbers" << endl;
    cin >> num1 >> num2;
    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf;

    return 0;
}