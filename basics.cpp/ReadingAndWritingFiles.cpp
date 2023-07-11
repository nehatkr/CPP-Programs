#include<iostream>
#include<fstream>
/*
The useful classes for working eith files in c++ are:
1.fstraembase
2.ifstream -->dreived from fstreambase
3.ofstream -->dreived from fstreambase
*/

// In order to work with files in c++,you will have to open it.
// primarily , there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

using namespace std;

int main(){
    string st = "Neha Thakur";
    string st2;
    // opening files using constructor and writing it
    ofstream out("sampleOfReadingWritingFile.txt"); // Write operation
    out<<st;
    // opening files using constructor and reading it
    ifstream in("sampleOfReadingWritingFile2.txt"); // Write operation
    in>>st2;
    getline(in , st2);
    cout<<st2;
    return 0;
}