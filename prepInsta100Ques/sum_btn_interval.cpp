// using recursion
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<cstdio> 
using namespace std;
int calcSum(int a, int b){
    // stop when any recursion call tries to go over b (larger number)
    if (a > b)
        return 0;
    return a + calcSum(a + 1, b);
}
int main()
{
    int a = 10;
    int b = 15;   
    int sum = calcSum(a, b);
    cout << sum;
    return 0;
}
// Time complexity : O(N)
// Space complexity : O(1)
// Auxiliary Space complexity : O(1)
// Because of function call stack