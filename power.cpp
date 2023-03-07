// we calculate m to the power of n
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>m;
    cin >> n;
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
       result*=m;  //2 the power of 4:- 2*2*2*2=16.
    }
    cout << result << endl;
    return 0;
}