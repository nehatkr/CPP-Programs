#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"hey, How are you"<<endl;
    }
};
class Base2{
    public:
     void greet(){
        cout<<"I'm fine what about you?"<<endl;
    }
};
class Derived : public Base1 , Base2{
    int a;
    public:
    void greet(){
        Base1 :: greet(); //Ambiguity Resolution
    }
};

int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();


    
    return 0;
}