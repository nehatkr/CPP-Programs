// Question:-
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/


#include <iostream>
#include<cmath>
using namespace std;
class simple
{
protected:
    int a, b;

public:
    void set1Data(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void display(void)
    {
        cout << "Addition is: " << a + b << endl;
        cout << "Substraction is: " << a - b << endl;
        cout << "Multiplication is: " << a * b << endl;
        cout << "Division is: " << a / b << endl;
    }
};
class scientific
{
protected:
    int x, y;

public:
    void set2Data(int num1, int num2)
    {
        x = num1;
        y = num2;
    }
    void process(void)
    {
        cout << "The square root of x is " << sqrt(x) << endl;
        cout << "The square root of y is " << sqrt(y) << endl;
        cout << "The cube root of x is  " << cbrt(x) << endl;
        cout << "The cube root of y is " << cbrt(y) << endl;
    }
};
// Inherited class
class derived:public simple,public scientific{
    public:
    void set(int a,int b){
        simple::set1Data(a,b);
        simple::display();
        scientific::set2Data(a,b);
        scientific::process();

    }
};

int main()
{
    int p,q;
    cout<<"Enter two number: "<<endl;
    cin>>p>>q;

    derived der;
    der.set(p,q);
    return 0;
}