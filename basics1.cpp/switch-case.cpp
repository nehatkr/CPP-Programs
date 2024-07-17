#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter a character:";
    cin>>character;
    switch (character)
    {
    case 'a':
    cout<<"vowel"<<endl;
        break;
        case 'e':
    cout<<"vowel"<<endl;
        break;
        case 'i':
    cout<<"vowel"<<endl;
        break;
        case 'o':
    cout<<"vowel"<<endl;
        break;
        case 'u':
    cout<<"vowel"<<endl;
        break;
    
    default:
    cout<<"consonents"<<endl;
        break;
    }
    return 0;
}