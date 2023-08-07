// sort an array consisting of only 0s and 1s.
// before sorting {1,1,0,0,1,0,1,0}
// after sorting {0,0,0,0,1,1,1,1}

#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOnes(vector<int> &v){ //pass by referance
    int Zeroes_count = 0;
    // counting Zeroes
    for (int ele:v)
    {
       if (ele==0)
       {
        Zeroes_count++;

       }
       
    }
    // for putting the zeroes and one in a sequence
    for (int i = 0; i < v.size(); i++)
    {
       if (i<Zeroes_count)
       {
        v[i]=0;
       }
       else{
        v[i]=1;
       }
    }
    
    
}

int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;

    vector<int> v;
    for (int  i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    sortZeroesAndOnes(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    

    return 0;
}
