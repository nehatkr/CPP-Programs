#include <iostream>
using namespace std;

int main()
{

    int num, firstNo=0, secondNo=1, nextNo;
    cout << "Enter the no to get fibonacci serise: " << endl;
    cin >> num;
   cout<<firstNo<<" ,"<<secondNo<<" ,";
        
    for (int i = 2; i < num; i++)
    {
        nextNo = firstNo + secondNo;
        firstNo=secondNo;
        secondNo=nextNo;
        cout<<nextNo<<" ,";
    }

    return 0;
}