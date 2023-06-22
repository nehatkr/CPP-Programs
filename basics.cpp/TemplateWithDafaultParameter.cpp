#include<iostream>
using namespace std;
template <class T1=int, class T2=float>
class Neha{
    public:
    T1 a;
    T2 b;
    Neha(T1 x, T2 y){
        a = x;
        b = y;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    Neha<> n(4 ,4.6); // default parameter
    n.display();
    cout<<endl;
    Neha <float , char > m(2.5 , 'N'); //with parameter
    m.display();
    return 0;
}