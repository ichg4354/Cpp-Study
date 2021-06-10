#include "counter.h"
#include "./counter.cpp"

int main()
{
    Counter test1 = Counter();
    cout << test1.get();
    Counter::helloStatic();
};