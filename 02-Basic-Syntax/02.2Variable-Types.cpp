#include <iostream>
using namespace std;

int globalVar = 100;

int main()
{
    bool isPassed = true;
    char grade = 'A';
    int age = 20;
    float cgpa = 8.65f;
    double salary = 45000.50;
    long long population = 8000000000LL;

    int arr[3] = {1, 2, 3};

    int x = 10;
    int *ptr = &x;
    int &ref = x;

    const int MAX = 100;
    auto num = 50;
    constexpr int SIZE = 5;

    cout << age << endl;
    cout << *ptr << endl;
    cout << ref << endl;
    cout << globalVar << endl;

    return 0;
}