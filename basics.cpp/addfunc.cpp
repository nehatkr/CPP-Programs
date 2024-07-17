#include <iostream>
using namespace std;
// function difination
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    // function decleration
    int a = 5;
    int b = 7;
    // function call
    cout << add(a, b) << endl;
    return 0;
}