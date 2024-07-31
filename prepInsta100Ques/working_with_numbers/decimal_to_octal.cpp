#include<iostream>
using namespace std;

void convertOctal(int num)
{
    // creating an array to store octal equivalent
    int octalArray[32];
 
    // using i to store octal bit at given array position
    int i = 0;
    while (num > 0) {
 
        // resultant remainder is stored at given array position
        octalArray[i] = num % 8;
        num = num / 8;
        i++;
    }
 
    // printing octal array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << octalArray[j];
}
 
int main()
{
    int n ;
    cin>>n;
    convertOctal(n);
    return 0;
}
