// constructor in inheritance
#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class Derived: public Base1 , public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c,int d):Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called "<<endl;
    }
     void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived Neha(1,2,3,4);
    Neha.printDataBase1();
    Neha.printDataBase2();
    Neha.printDataDerived();
    return 0;
}
/*
case 1:
class B : public A{
 // order of execution of constructor -> first A() then B()
};

case 2:
class A : public B , public C{
 // order of execution of constructor -> first B() then C() and A()
};

case 3:
class A : public B , virtual public C{
 // order of execution of constructor -> first C() then B() and A()
};

*/