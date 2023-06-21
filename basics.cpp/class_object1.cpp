#include<iostream>
using namespace std;

    class Box{
      public:
      double length;
      double breadth;
      double height;  
    };
   
int main(){
    // objects of class box
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.length=5.0;
    Box1.breadth=6.0;
    Box1.height=7.0;

    Box2.length=10.0;
    Box2.breadth=12.0;
    Box2.height=13.0;

     // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
    return 0;
}