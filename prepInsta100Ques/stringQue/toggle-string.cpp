#include<iostream>
using namespace std;

int main(){

    char str[100];
    cout<<"Enter the sting"<<endl;
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i]+32;
        }else if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i]-32;
        }
    }
    cout<<"string is:"<<str<<endl;
    return 0;

}