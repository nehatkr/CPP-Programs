// you have given an array you have to find the equlibrium index . where the sum of left side of array is equal to the right side
// input:3,4,3,1,6
// outpur:2
#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> v, int n)
{
    int leftSum = 0;
    int rightSum = 0;
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    for (int i = 1; i < n; i++)
    {
        leftSum = leftSum + v[i - 1];
        left[i] = leftSum;
    }
    for (int i = n - 2; i >= 0; i++)
    {
        rightSum = rightSum + v[i + 1];
        right[i] = rightSum;
    }
    for (int i = 0; i < n; i++)
    {
        if (right[i] == left[i])
        {
            return i;
        }
    }

    return -1;
}

int main(){
     int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << helper(v, n);
}