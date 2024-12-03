// There is a Printing show where costumer submit their print job at regular intervals and each jon take fix amount of time to complete you are given 
// an integer value N denoting the total number of print jobs , and x denoting the total number of print jobs  and x denote the time duration
// after which the next  print  job arrives
// input1:4
// input2:5
// output:15
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int x;
    cin>>n;
    cin>>x;
    int totaltime=(n-1)*10;
    int arrivalTime=(n-1)*x;
    cout<<totaltime-arrivalTime;
}