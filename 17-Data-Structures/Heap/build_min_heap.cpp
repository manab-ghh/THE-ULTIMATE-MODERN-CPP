#include<iostream>
using namespace std;

class Heap {
    int arr[100];
    int size = 0;

public:

    Heap() {}

    void insert(int val) {
        size++;
        int idx = size;
        arr[idx] = val;

        while (idx > 1) {
            int parent = idx / 2;

            if (arr[parent] > arr[idx]) {
                swap(arr[parent], arr[idx]);
                idx = parent;
            } else {
                return;
            }
        }
    }

    void delete_() {
        if (size < 1) {
            cout << "The tree is empty, dele]tion is not possible" << endl;
            return;
        }

        arr[0] = arr[size];
        size--;

        int i = 1;
        while (i < size) {
            int leftNode = i * 2;
            int rightNode = i * 2 + 1;

            if (leftNode < size && arr[i] > arr[leftNode]) {
                swap(arr[i], arr[leftNode]);
                i = leftNode;

            } else if (rightNode < size && arr[i] > arr[rightNode]) {
                swap(arr[i], arr[rightNode]);
                i = rightNode;

            } else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

};

int main() {
    Heap h;

    h.insert(45);
    h.insert(76);
    h.insert(93);
    h.insert(46);
    h.insert(29);
    h.insert(11);

    h.print();

    return 0;
}