#include<iostream> 
#include<math.h> 
using namespace std;

// number of digits in a number is order
int order(int x)
{
    int len = 0;
    while (x)
    {
        len++;
        x = x/10;
    }
    return len;
}

void armstrong(int low, int high){
    
    for(int num = low; num <= high; num++){
        
        int sum = 0, temp, digit, len;
        temp = num;
        
        // function to get order(length)
        len = order(num);
        
        // loop to extract digit, find cube & add to sum
        while(temp != 0)
        {
            // extract digit
            digit = temp % 10;

            // add power to sum
            sum = sum + pow(digit,len);;
            temp /= 10;
        };
    
        if(sum == num)
            cout << num << " ";
    }
}

// Driver Code
int main ()
{
    //variables initialization
    int low = 100, high = 400;
    // get armstrong numbers
    armstrong(low, high);

    return 0;
}