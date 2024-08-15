#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 9, 2, 6, 4, 8, 10, 5, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0; i<n; i++)
      cout<<arr[i]<<" ";

    return 0;
}