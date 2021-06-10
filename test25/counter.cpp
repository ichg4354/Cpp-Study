#include "./counter.h"

Counter::Counter() : value(0){};

void Counter::increment()
{
    value++;
}
void Counter::decrement()
{
    value--;
}

int Counter::get() const
{
    return value;
}

