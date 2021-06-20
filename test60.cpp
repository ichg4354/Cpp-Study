#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    int y;
    Base(const int xx, int yy) : x(xx), y(yy){};
    virtual void print()
    {
        cout << "HI FROM BASE" << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int xx, int yy) : Base(xx, yy){};
    void print()
    {
        cout << "HI FROM DERIVEd";
    }
};

int main()
{
    Derived test1(15, 5);
    Base &ref = test1;
    Base *ptr = &test1;
    ptr->print();
}