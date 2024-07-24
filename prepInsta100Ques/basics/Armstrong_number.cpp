// abcd… = an + bn + cn + dn + …
// Where n is the order(length/digits in number)

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, count = 0, temp1;;
    int digit,temp2,sum=0;

    cout << "Enter the number: " << endl;
    cin >> num;

    temp1 = num;

    while(temp1){
        count++;
        temp1=temp1/10;
    }

    temp2=num;
    
    while (temp2 != 0)
    {
        
        digit = temp2 % 10;
       sum = sum + pow(digit, count);
        temp2 = temp2 / 10;
    }

    cout<<"The sum is: "<<sum<<endl;

    if (num == sum)
    {
        cout << num << "  is Armstrong number"<<endl;
    } else
    {
        cout << num << "  not a Armstrong number";
    }

    return 0;
}

// commands to run the code:-
// g++ .\power_of_numbers.cpp
// .\a.exe