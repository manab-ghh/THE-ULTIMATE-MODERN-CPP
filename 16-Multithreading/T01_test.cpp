#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;          


void findEven(long long start, long long end, long long *EvenSum) {
    for (long long i = start; i <= end; i++) {
        if (!(i & 1)) {
            *EvenSum += i;
        }
    }
}

void findOdd(long long start, long long end, long long *OddSum) {
    for (long long i = start; i <= end; i++) {
        if (i & 1) {
            *OddSum += i;
        }
    }
}

int main() {
    long long start = 0, end = 1900000000;

    long long OddSum = 0;
    long long EvenSum = 0;

    auto startTime = high_resolution_clock::now();

    thread t1(findEven, start, end, &(EvenSum));
    thread t2(findOdd, start, end, &(OddSum));

    
	t1.join();
	t2.join();
	
	

    // findEven(start, end, &EvenSum);
    // findOdd(start, end, &OddSum);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << "OddSum: " << OddSum << endl;
    cout << "EvenSum: " << EvenSum << endl;

    cout << "Sec: " << duration.count()/1000000 << endl;

    return 0;
}