#include <iostream>
using namespace std;

class Counter
{
    int value;

public:
    Counter() : value(0) {}
    void increment() { value++; }
    int get() { return value; }
};

int main()
{
    Counter c1;
    const Counter c2;
    cout << c2.get() << endl;
}