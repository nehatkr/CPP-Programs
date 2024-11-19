#include<iostream>
using namespace std;

int nearestInteger(int num, int m){
  int r = num%m;
  if (r<(m+1)/2)
  {
   return num-r;  //smaller number
  }
   return num+(m-r); //bigger number
    
}
