/* Given an integers array 'a' , return the prifix sum / running sum in the same array
without creating a new array.
*/
#include<iostream>
#include<vector>
using namespace std;
void runningsum(vector<int> &v){
    for (size_t i = 1; i < v.size(); i++)
    {
        v[i]=v[i-1]+v[i];
    }
   return; 
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
    runningsum(v);
    for (int i = 0; i < n; i++)
    {
       cout<<v[i]<<" ";
    }cout<<endl;
    
    
}