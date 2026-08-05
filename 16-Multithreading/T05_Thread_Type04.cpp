// 4. Non-static member function

#include <iostream>
#include <thread>
using namespace std;

class Base {
    public:
        void fun(int x) {
            while (x-- > 0) {
                cout << x << endl;
            }
        }
};

int main() {
    Base b;
    thread t(&Base::fun, b, 10);
    t.join();
    
    return 0;
}