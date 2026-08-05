#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int myAmount = 0;
std::mutex m;

void addMoney() {
    m.lock();
    myAmount++;
    m.unlock();
}

// void addMoney() {
//     myAmount++;
// }

int main() {
    thread t1(addMoney);
    thread t2(addMoney);

    t1.join();
    t2.join();

    cout << myAmount << endl;
    return 0;
}