#include <iostream>
using namespace std;

int ternarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == key) return mid1;  // Found at mid1
        if (arr[mid2] == key) return mid2;  // Found at mid2

        if (key < arr[mid1]) right = mid1 - 1;         // Search in left third
        else if (key > arr[mid2]) left = mid2 + 1;     // Search in right third
        else { left = mid1 + 1; right = mid2 - 1; }    // Search in middle third
    }
    return -1;  // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int index = ternarySearch(arr, 0, n - 1, key);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";
}
