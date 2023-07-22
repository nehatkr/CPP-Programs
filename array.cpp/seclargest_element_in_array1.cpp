// find the second largest element in the given array.
#include<iostream>
using namespace std;

int largestElementIndex(int array[], int size){
    int max = INT_MIN;
    int maxindex=-1;
    for (int i = 0; i < size; i++)
    {
       if (array[i]>max)
       {
        max=array[i];
        maxindex=i;
       }
       
    }
    return maxindex;
}

int main(){
    int array[]={2,3,5,7,6,1};
    int indexoflargest = largestElementIndex(array,6);
    cout<<"largest element"<<endl;
    cout<<array[indexoflargest]<<endl;
    array[indexoflargest]=INT_MIN; //array manipulation
    int indexofsecondlargest=largestElementIndex(array,6);
    cout<<"Second largest element"<<endl;
    cout<<array[indexofsecondlargest]<<endl;
    return 0;
}
