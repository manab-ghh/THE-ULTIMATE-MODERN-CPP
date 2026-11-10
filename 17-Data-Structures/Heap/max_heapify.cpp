#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = i * 2;
    int right = i * 2 + 1;
    
    if (left <= n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right <= n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (i != largest) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
int main() {
    int n = 5;
    int arr[6] = {-1, 65, 89, 45, 34, 76};

    for (int i = n/2; i > 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}