#include <iostream>
using namespace std;
// function difination
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int add(int num1 , int num2 , int num3 ){
    int sum = num1 + num2 + num3;
    return sum;
}
float add(float num1 , float num2){
    float sum = num1 + num2;
    return sum;
}

int main()
{
    // function decleration
    int a = 5;
    int b = 7;
    int c = 8;
    float d = 2.5;
    float e = 5.3;
    // function call
    cout << add(a, b) << endl;
    cout<<add(a,b,c)<<endl;
    cout<<add(d,e)<<endl;


    return 0;
}