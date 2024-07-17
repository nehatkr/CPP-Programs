#include <iostream>
using namespace std;
int add(int a, int b = 1, int c = 2) //agar b ko default parameter bana diye tho uske bad k sara parameter defaul karna padega
{
    return (a + b + c);
}

int main()
{
    cout << add(2) << endl; //default value passing
    cout << add(2, 2) << endl;
    cout << add(2, 2, 3) << endl;
    return 0;
}