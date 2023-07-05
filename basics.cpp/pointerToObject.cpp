#include <iostream>
using namespace std;

class complex
{
    int Real, Imaginary;

public:
    void getData()
    {
        cout << "The real part is " << Real << endl;
        cout << "The real part is " << Imaginary << endl;
    }
    void setData(int a, int b)
    {
        Real = a;
        Imaginary = b;
    }
};
int main()
{
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex; // new object is created
    // (*ptr).setData(1,54); brackets are important beacuse dot operater's precedance is higher then the and star operator.
    // is same as
    ptr->setData(1, 3);

    // (*ptr).getData(); is as good as
    ptr->getData();


    // Array of objets
    complex *ptr1 = new complex[4];
    ptr1->setData(1, 65);
    ptr1->getData();
    return 0;
}