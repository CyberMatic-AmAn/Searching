#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int key) {
    if (arr[0] == key) return 0;

    int i = 1;
    while (i < n && arr[i] <= key)
        i *= 2;

    return binarySearch(arr, i / 2, min(i, n - 1), key);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int index = exponentialSearch(arr, n, key);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";
}
