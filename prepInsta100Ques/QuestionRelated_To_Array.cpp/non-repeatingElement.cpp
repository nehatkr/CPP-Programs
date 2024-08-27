#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 7, 2, 4, 4, 2, 3, 6, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[n], count = 0;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] != 1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j]=1;
                }
            }
            if (count == 1)
            {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}