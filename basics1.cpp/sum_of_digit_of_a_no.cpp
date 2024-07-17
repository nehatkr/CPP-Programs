// cout the number of digits for a given number n.
#include <iostream>
using namespace std;
int main()
{
    int n ,sum=0;
    cout<<"Enter the digits:";
    cin >> n;
    int digits = 0;
    while (n > 0)
    {
       int lastdigit = n%10; //to get the last digit.ex:-(1234%10=4)
       sum+=lastdigit;
         n=n/10; //to remove the last digit.ex:-(1234/10=123)
    }
    cout<<" Sum of total number of digits are:";
    cout << sum << endl;

    return 0;
}