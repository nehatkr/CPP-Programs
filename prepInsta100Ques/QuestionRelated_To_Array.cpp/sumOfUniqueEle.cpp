#include<bits/stdc++.h>
using namespace std;

int sumOfUniqueEle(const vector<int> &arr){
    int sum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        bool isUnique = true;
        for (int j = 0; j < arr.size(); i++)
        {
           
            if(i != j && arr[i]==arr[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
            sum = sum + arr[i];
        }
    }
    return sum;
}

int main(){
    string str;
    getline(cin,str);
    vector<int>arr;
    stringstream ss(str);
    string num;
    while (getline(ss,num,' '))
    {
        arr.push_back(stoi(num));
    }
   cout<< sumOfUniqueEle(arr);
   return 0;
}