#include <iostream>
using namespace std;
/*
Inheritance-
student--->Test
student--->sports
test--->result
sports--->result
*/
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};
class Test : virtual public student
{ // making student as a virtual base class
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your result is hare : " << endl
             << "Maths: " << maths << endl
             << "physics: " << physics << endl;
    }
};
class sports: virtual public student{
    protected:
    float score;
    public:
    void set_score(float s){
        score = s;
    }
    void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
    }
};
class Result : public Test, public sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is :"<<total<<endl;
    }
};


int main()
{
Result Neha;
Neha.set_number(222126);
Neha.set_marks(95.0 , 88.9);
Neha.set_score(9);
Neha.display();
    return 0;
}