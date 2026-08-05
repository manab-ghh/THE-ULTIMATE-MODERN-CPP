#include <iostream>
using namespace std;

int main() {
    //Findin sum of 1 to n number.

    int n = 9;
    int sum = 0;
    int i = 1;

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum of 1 to " << n << " is: " << sum << endl;
    
    return 0;
}