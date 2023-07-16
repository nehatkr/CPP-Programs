#include <iostream>
using namespace std;

void decrease(int n1, int n2)
{
    n1--;
    n2 = n2 - 2;
    cout << (n1) << ":" << (n2);
    // n1 and n2 are the formal parameters
}
int main()
{
    int p = 26;
    int q = 13;
    decrease(p, q);
    cout << endl
         << (p) << ":" << (q);
    // p and q are actual parameters
    return 0;
}