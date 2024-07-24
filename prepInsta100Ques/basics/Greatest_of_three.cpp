#include<iostream>
using namespace std;
int main ()
{
    int first, second, third;
    cout<<"Enter the numbers for comparision"<<endl;
    cin>>first>>second>>third;
    
    int temp, result;

    // find the largest bw first and second and store in temp
    temp = first > second ? first:second;
    
    // find the largest bw temp and third and finally printing it
    result = temp > third ? temp:third;
        
    // the above two ternary statements can be condensed into one ternary statement
    //result = third > (first > second ? first : second) ? third : ((first > second) ? first : second);
    
    cout << result << " is the largest";

 
    return 0;
}
// Time complexity : O(1)
// Space complexity : O(1)