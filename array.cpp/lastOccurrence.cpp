// find the last occurrence of an element x in a given array
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v(6);
    cout << "Enter the element:\n";
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    cout << "Enter x:";
    int x;
    cin >> x;
    int occurence = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occurence = i;
        }
    }
    cout << occurence << endl;
    return 0;
}