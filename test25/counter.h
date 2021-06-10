#ifndef COUNTER
#define COUNTER
#include <iostream>
using namespace std;

class Counter
{
    int value;

public:
    Counter();
    void increment();
    void decrement();
    int get() const;
    static void helloStatic()
    {
        cout << "HELLO!";
    }
};

#endif