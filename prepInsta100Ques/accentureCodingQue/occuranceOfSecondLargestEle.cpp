// input:122344555  sorted order
// output:2  (count of occurance of second largest element)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> v, int n)
{
    int secondLargestEle = 0;
    int count = 0;
    if (n == 0)
        return 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            secondLargestEle = v[i];
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (secondLargestEle == v[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << helper(v, n);
}