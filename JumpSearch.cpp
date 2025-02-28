#include <iostream>
#include <cmath>
using namespace std;

int jumpSearch(int arr[], int n, int key) {
    int step = sqrt(n);
    int prev = 0;

    while (arr[min(step, n) - 1] < key) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) return -1;
    }

    while (arr[prev] < key) {
        prev++;
        if (prev == min(step, n)) return -1;
    }

    return (arr[prev] == key) ? prev : -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int index = jumpSearch(arr, n, key);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";
}
