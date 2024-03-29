/* rotate the given array 'a' by k steps ,where k is non- negative.
note:k can be greater then n as well where n is the size of array 'a'.
given array ={1,2,3,4,5}
required array ={4,5,1,2,3}
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k = 2;
    k = k % v.size();
    
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.end());

    for(int a:v){
        cout<<a<<" ";
    }cout<<endl;
}
