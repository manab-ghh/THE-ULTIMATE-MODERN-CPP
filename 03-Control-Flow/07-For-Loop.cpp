#include <iostream>
using namespace std;

int main() {
    //finding factorial of a number

    int n = 5;

    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial The number is: " << fact << endl;
    return 0;
}