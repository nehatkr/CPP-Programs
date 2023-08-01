// /find the maximum value out of all the elements in the array
#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 5, 18, 7, 5, 9};
    int max = array[0];
    for (int i = 1; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << max << endl;

    return 0;
}