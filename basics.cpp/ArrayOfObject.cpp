#include<iostream>
using namespace std;
class ShopItem{
    int id;
    float price;
    public:
    void setData(int a , int b){
        id = a;
        price = b;
    }
    void getData(void){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price  of this item is "<<price<<endl;
    }
};
int main(){
    int size = 3;
    int p;
    float q;
    // int *ptr = new int [34];
    // int *ptr = &size; same as down
    ShopItem *ptr = new ShopItem[size]; //dynamic allocation of array
    ShopItem *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
       cout<<"Enter Id and price of item  "<<i+1<<endl;
       cin>>p>>q;
    //    (*ptr).setData(p, q);
       ptr->setData(p, q);
       ptr++;

    }
    for ( int i = 0; i < size; i++)
    {
        cout<<"Item number"<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}
/*
1 2 3
    ^
    |
    |
    ptr
ptrTemp          
*/