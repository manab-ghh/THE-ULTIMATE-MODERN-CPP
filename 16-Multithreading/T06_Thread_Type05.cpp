// 5. Static member function

#include <iostream>
#include <thread>
using namespace std;

class Base {
    public:
        static void fun(int x) {
            while (x-- > 0) {
                cout << x << endl;
            }
        }
};

int main() {
    thread t(&Base::fun, 10);
    t.join();

    return 0;
}