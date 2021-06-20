#include <iostream>
using namespace std;

class ValType
{
    int value;

public:
    ValType() : value(0){};
    void set(int v1)
    {
        value = v1;
    }
    void show() const
    {
        cout << value << endl;
    }
    friend int f(const ValType &x);
};

int g(const ValType &x, int n)
{
    cout << x.value << endl;
}

int main()
{
    ValType test;
    test.set(5);
    g(test);
}