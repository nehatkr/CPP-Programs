#include <iostream>
using namespace std;

int main()
{
    int digit=0,num,sum = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    while(num!=0)
    {
        digit = num % 10;  //give digit
        sum = sum + digit;
         num = num / 10;  //remove digit
    }
    cout << "The sum of digit of a given number is: " << sum;

    return 0;
}