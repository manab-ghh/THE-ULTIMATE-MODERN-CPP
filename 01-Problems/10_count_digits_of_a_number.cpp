//Write a C++ program to count the number of digits of a number.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int count = 0;

    while (num) {
        count++;
        num /= 10;
    }

    cout << "Number of digits of this number: " << count << endl;
    return 0;
}