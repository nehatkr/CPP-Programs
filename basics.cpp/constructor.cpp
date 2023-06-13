#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with same name as  of
    // the class.
    // It is use to initilalize the objects of its class
    // It is automatically  invoked whenever an object is created
    complex(void); // constructor declaration
    void printnumber()
    {
        cout << "Your number is:-" << a << "+" << b << "i" << endl;
    }
};
complex ::complex(void) //----> this is a default constructor
{
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.printnumber();
    return 0;
}
/*
Important Characteristics of Constructors in C++

1.A constructor should be declared in the public section of the class
2.They are automatically invoked whenever the object is created
3.They cannot return values and do not have return types
4.It can have default arguments
5.We cannot refer to their address
*/