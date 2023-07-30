/*Check if we can partition the array into two subarrays with equal sum.
more formally,check that the prefix sum of a part of the array is equal
to the suffix sum of rest of the array.
prefix sum i = sum(a0.....ai)
suffix sum i+1 = sum(ai+1......an-1)
*/
#include<iostream>
#include<vector>
using namespace std;
bool checkPrefixsuffixSum(vector<int> &v){
    int total_sum=0;
    for (int i = 0; i < v.size(); i++)
    {
       total_sum=v[i]+total_sum;
    }
    
    int prefix_sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        prefix_sum=v[i]+prefix_sum;
        int suffix_sum = total_sum - prefix_sum;
        if(suffix_sum==prefix_sum){
            return true;
        }
        
    }
    return false;
}
int main(){

    int n;
    cout<<"enter the size of a array:";
    cin>>n;
    
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<checkPrefixsuffixSum(v)<<endl;
    
    
}