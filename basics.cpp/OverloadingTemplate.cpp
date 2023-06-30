#include<iostream>
using namespace std;
// template <class T>
// class Neha{
//     public:
//     T data;
//     Neha(T a){
//         data = a;
//     }
//     void display(){
//         cout<<data;
//     }
// };
template <class T>
class Neha
{
public:
    T data;
    Neha(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T>
void Neha<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(){
//     Neha<int> h(5);
//    cout<< h.data<<endl;
//     h.display();
//     return 0;.
    func(4);  //Exact match takes the highest priority
    func1(4);
    return 0;

}