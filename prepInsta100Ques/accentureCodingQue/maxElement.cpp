// find maximum element in an array and their index seprated by a line
#include<iostream>
using namespace std;

void maxElement(int arr[], int length){
  int  maxEle = arr[0];
  int maxIndex = 0;
  for (int i = 0; i <length; i++)
  {
   if (arr[i]>maxEle)
   {
    maxEle= arr[i];
    maxIndex= i;
   }
  }
  cout<<maxEle<<endl;
  cout<<maxIndex;
  return;
  
}
