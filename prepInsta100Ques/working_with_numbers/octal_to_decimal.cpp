// (462)8 = 4 * 82 + 6 * 81 + 2 * 80
// 256 + 48 + 2 = (306)10

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    int i = 0, decimal = 0, digit;
    while (num != 0)
    {
        digit = num % 10;
        decimal = decimal + (digit * pow(8, i));
        num = num / 10;
        i++;
    }
    cout << decimal;
    return 0;
}