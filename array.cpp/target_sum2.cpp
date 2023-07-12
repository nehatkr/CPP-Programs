// count the number of triplets whose sum is equal to given value x.
#include <iostream>
using namespace std;
int main()
{       

    // dry runn
    /*
    targetsum=6
    triplets=1
    i=0,j=1,k=2
    arr[i]=3
    arr[j]=1
    arr[k]=2
    */
    int array[] = {3, 1, 2, 4, 1,5};
    int targetsum = 6;
    int size = 6;
    int triplets = 0;
    for (size_t i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                
            if (array[i] + array[j] + array[k] == targetsum)
            {
                triplets++;
            }
            }
           
        }
    }
    cout << triplets << endl;
    return 0;
}