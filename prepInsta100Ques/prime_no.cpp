#include <iostream>
using namespace std;

int main()
{
    int i,num;
    int isPrime= 1;
    
    cout<<"Enter the number: ";
    cin>>num;
    // 0, 1 and negative numbers are not prime
    if(num < 2){
        isPrime = 0;
    }
    else{   
        // shouldn't have any divisors in b/w 2 & num-1 
        for(i=2; i < num; i++)
        {
            if(num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        cout<<num<< " is Prime"<<endl;
    else
        cout<<num<< " is not Prime"<<endl;
 
    return 0;
}
//Time Complexity: O(N)
//Space Complexity O(1)

// This code is better than previous code as we
// 1. Break the loop as soon as we find first divisor
// 2. Loop runs b/w [2,n-1] rather than previous [1, n]
// 3. Condition for 0, 1, neg. nos checked earlier in the code