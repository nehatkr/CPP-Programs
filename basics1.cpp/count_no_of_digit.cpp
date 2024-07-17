// cout the number of digits for a given number n.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the digits:";
    cin >> n;
    int digits = 0;
    while (n > 0)
    {
        digits++;
        n = n / 10;  //let suppose given number are 1256 the after dividing by 10 we get 125 (1256/10=125)
    }
    cout<<"Total number of digits are:";
    cout << digits << endl;

    return 0;
}