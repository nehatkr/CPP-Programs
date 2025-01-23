// return the sum of all even numbered in killometer till n they complete
// input:10
// output:30
// exp: 2+4+6+8+10=30
#include<iostream>
using namespace std;

int evenSum(int n){
    int count=0;
    for (int i = 1; i <= n; i++)
    {
       if(i%2==0){
        count = count + i;
       }
    }
    return count;

}

