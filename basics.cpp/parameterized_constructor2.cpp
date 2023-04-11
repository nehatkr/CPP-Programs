#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int a ,int b){
        x=a;
        y=b;

    }
    void displaypoints(){
        cout<<"the point is("<<x<<","<<y<<")"<<endl;
    }
};
int main(){
    point p(1,2);
    p.displaypoints();

    point q(4,7);
    q.displaypoints();
    return 0;
}