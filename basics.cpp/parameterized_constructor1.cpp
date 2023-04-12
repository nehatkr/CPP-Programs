#include<iostream>
using namespace std;
    class complex
{
    int a, b;

public:

    complex(int,int); // constructor declaration
    void printnumber()
    {
        cout << "Your number is :-" << a << "+" << b << "i" << endl;
    }
};  
complex::complex(int x,int y)//----> this is a default constructor as it take 2 parameters
{
  a=x;
  b=y;  
}

int main(){
    complex a(4,6);
    a.printnumber(); 

    complex b = complex(5,7);
    b.printnumber();

    return 0;
}