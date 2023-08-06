#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> loopExampleVector;
    // for loop
    for (int i = 0; i < 5; i++)
    {
       int element;
       cin>>element;
       loopExampleVector.push_back(element);

       // we can use cin>>[i] if size of array was defined
     }
     for (int i = 0; i < loopExampleVector.size(); i++)
     {
        cout<<loopExampleVector[i]<<" ";
     }
     cout<<endl;

     loopExampleVector.erase(loopExampleVector.end()-2);

     loopExampleVector.insert(loopExampleVector.begin()+2,6);

    //  for each loop
    for(int element:loopExampleVector){
        cout<<element<<" ";
    } 
    cout<<endl;

    // while loop
    int idx=0;
    while(idx<loopExampleVector.size()){
        cout<<loopExampleVector[idx++]<<" ";
    }
    

    
    return 0;
}