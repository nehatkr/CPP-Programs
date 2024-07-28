// (11011)2 = 1 * 24 + 1 * 23 + 0 * 22 + 1 * 21 + 2 * 20
//                = 16 + 8 + 0 + 2 + 1
//                = (27)1

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    int decimal = 0 , i=0;
   while(num!=0)
    {
        int digit = num % 10;
        decimal = decimal+ digit*pow(2,i);
        num = num / 10;
            i++;
    }
    cout << decimal;
    return 0;
}