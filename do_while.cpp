// print the sum of stream of N integers in the input using do-while loop.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number:";
    cin >> n;
    int sum = 0;
    do
    {
        int num;
        cin>>num;
        sum+=num;
        n--;
    } while (n > 0);

    return 0;
}