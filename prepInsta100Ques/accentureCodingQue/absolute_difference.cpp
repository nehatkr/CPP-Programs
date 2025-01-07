// implement the function to find and return the number of elements of arr having  an absolute difference of less then or equal to diff with num
#include<bits/stdc++.h>
using namespace std;
int main(void){
int n;
cin>>n;
int arr[n] = {0};
for (int i = 0; i < n; i++)
{
        cin>>arr[i];
}
int num;
cin>>num;
int diff;
cin>>diff;
 int count=0;
  for (int i = 0; i < n; i++)
  {
    if(abs(arr[i]-num)<=diff){ //taking absolute difference
        count++;
    }
  }
  if(count>0){
    count<<count;
  }else{
    cout<<-1;
  }

}