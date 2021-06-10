#include <iostream>
using namespace std;

class ValType
{
    int value;

public:
    ValType() : value(0) {}
    void set(int v1) { value = v1; }
    void show() const { std::cout << value << '\n'; }
    friend int f(const ValType &x);
};

int f(const ValType &x)
{
    cout << x.value;
}

int main()
{
    ValType test = ValType();
    test.set(5);
    f(test, 3);
}