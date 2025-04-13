#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate array to the right by k elements
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // In case k > n

    // Reverse the entire array
    reverse(arr.begin(), arr.end());

    // Reverse first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Reverse the rest
    reverse(arr.begin() + k, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateArray(arr, k);

    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;

// void rotateArray(vector<int>& arr, int k) {
//     int n = arr.size();
//     vector<int> temp(n);
//     for (int i = 0; i < n; i++) {
//         temp[(i + k) % n] = arr[i];
//     }
//     arr = temp;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int k = 2;
//     rotateArray(arr, k);
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     return 0;
// }
