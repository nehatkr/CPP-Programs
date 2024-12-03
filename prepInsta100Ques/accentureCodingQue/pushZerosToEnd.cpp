#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
 void pushZerosToEnd(vector<int> &arr){
    int n = arr.size();
    vector<int> temp(n);

    int j=0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i] != 0){
        temp[j]=arr[i];
        j++;
       }
    }
      // Fill remaining positions in temp[] with zeros
    while (j < n) {
        temp[j] = 0;
        j++;
    }

    // Copy all the elements from temp[] to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = temp[j];
 }
int main(){
  vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);

    // Print the modified array
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}