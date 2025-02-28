#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right && key >= arr[left] && key <= arr[right]) {
        int pos = left + ((key - arr[left]) * (right - left)) / (arr[right] - arr[left]);
        if (arr[pos] == key) return pos;
        if (arr[pos] < key) left = pos + 1;
        else right = pos - 1;
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int index = interpolationSearch(arr, n, key);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";
}
