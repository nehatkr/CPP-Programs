// count the number of occurrences of a particular element x.
#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v(6);
    cout<<"Enter the element:\n";
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;
    int occurence=0;
    for(int ele:v){
        if (ele==x)
        {
           occurence++;
        }
        
    }
    cout<<occurence<<endl;
    return 0;
}