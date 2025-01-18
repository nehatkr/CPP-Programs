#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int vowels = 0;
    cout<<"Enter a string"<<endl;
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
         str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
    }
    cout<<"Number of vowels are:"<<vowels;
}