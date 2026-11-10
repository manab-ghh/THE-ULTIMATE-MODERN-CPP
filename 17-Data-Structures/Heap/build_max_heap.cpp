#include<iostream>
using namespace std;

class Heap {
    int arr[100];
    int size = 0;

public: 
    Heap () {
        arr[0] = -1;
    }

    void insert(int val) {
        size++;

        int idx = size;

        arr[idx] = val;

        while (idx > 1) {
            int parents = idx / 2;

            if (arr[parents] < arr[idx]) {
                swap(arr[idx], arr[parents]);
                idx = parents;
            } else {
                return;
            }
        }
    }

    void delete_() {
        if (size < 1) {
            cout << "The Tree is empty, deletion is not possible" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size) {
            int leftNode = i * 2;
            int rightNode = i * 2 + 1;

            if (leftNode < size && arr[i] < arr[leftNode]) {
                swap(arr[leftNode], arr[i]);
                i = leftNode;

            } else if (rightNode < size && arr[i] < arr[rightNode]) {
                swap(arr[rightNode], arr[i]);
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
    h.insert(67);
    h.insert(39);
    h.insert(93);
    h.insert(39);
    h.insert(57);
    h.insert(45);

    h.print();
    
    h.delete_();

    h.print();

    return 0;
}