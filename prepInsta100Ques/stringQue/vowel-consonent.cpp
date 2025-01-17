// we have to tell wether this character is vowel or consonent

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "vowel";
    }
    else
    {
        cout << "consonent";
    }
    return 0;
}