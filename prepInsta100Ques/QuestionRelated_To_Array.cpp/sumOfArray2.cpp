// taking input with {} this brackets

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    if(str.front()=='[' && str.back()==']'){
    str=str.substr(1,str.length()-2);
    }
    vector<int> arr;
    stringstream ss(str);
    string num;
    while (getline(ss,num,' '))
    {
        arr.push_back(stoi(num));
    }
    int n=arr.size();
    
   int number[n];
    for (int i = 0; i < n; i++)
    {
        number[i] = arr[i];
    }

    reverse(number,number+n);

    for (int i = 0; i < n; i++)
    {
        cout<<number[i]<<" ";
    }
    
    cout<<endl;
    return 0;
    
}



