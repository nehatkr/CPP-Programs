#include <iostream>
using namespace std;

// Main function to run the program
int main()
{
    int arr[] = {3, 5, 2, 2, 5, 6, 2, 3, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int visited[n];

    for (int i = 0; i < n; i++)
    {

        if (visited[i] != 1)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j] = 1;
                }
            }
            if (count != 1)
                cout << arr[i] << " ";
        }
    }

    return 0;
}
