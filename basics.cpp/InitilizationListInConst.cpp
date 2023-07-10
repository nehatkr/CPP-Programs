// Initilization list in constructor:
#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : b(j), a(i+b)--> this will create a problem beacuse a will initialized first.
    // Test(int i, int j) : a(i), b(a + j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}

