// The factor of a number should be the prime factor of the given numbers(not understood*)
#include <iostream>
#include <math.h>
using namespace std;

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    cout << n << endl;

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
        cout << n << " ";
}

// Driver code
int main()
{
    int n = 312;
    primeFactors(n);
    return 0;
}
