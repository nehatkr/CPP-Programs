#include<iostream>
using namespace std;

int main(){
    char str[30];
    int length;
    cout<<"Enter the string"<<endl;
    gets(str);
    for (int i = 0; str[i] != '\0'; ++i)
    {
       length++;
    }
    cout<<" length of the given string is:"<<length<<endl;
    return 0;
}