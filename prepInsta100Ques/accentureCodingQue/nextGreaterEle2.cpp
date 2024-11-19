// using stack based approach
// [4,5,2,25,0]

#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

vector<int> helper(vector<int> v, int n)
{
    vector<int> ans(n, 0);
    if (n == 0)
    {
        return ans;
    }
    stack<int> s;
    s.push(v[n - 1]); // pushing the value of last value in the stack

    ans[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        int currentValue = v[i];
        if (s.top() > currentValue)
        {
            ans[i] = s.top();
        }else{
            while (s.size()>0 && s.top()<=currentValue) 
            {
               s.pop(); //removing element from stack till the stack become empty and top value is smaller then the current value
            }
            ans[i] = s.size()>0? s.top():-1;
        }
        s.push(currentValue);
    }
    return ans;
}

int main(){
vector<int> arr={4,5,2,25};
int n;
helper(arr,n);
 return 0;
}