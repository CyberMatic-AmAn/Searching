#include <iostream>
using namespace std;

int fibonacciSearch(int arr[], int n, int key) {
    int fib2 = 0, fib1 = 1, fib = fib2 + fib1;
    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib2 + fib1;
    }

    int offset = -1;
    while (fib > 1) {
        int i = min(offset + fib2, n - 1);
        if (arr[i] < key) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        } else if (arr[i] > key) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        } else {
            return i;
        }
    }

    return (fib1 && arr[offset + 1] == key) ? offset + 1 : -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int index = fibonacciSearch(arr, n, key);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";
}
