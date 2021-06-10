#include <iostream>
#include <vector>
using namespace std;

class Base
{
private:
    int x;

public:
    std::vector<int> list;
    Base(int x1) : x(x1), list(10, 0){};
    void setN(int i, int value)
    {
        // list.insert(i, value); insert에서 에러가 납니다.
        list.push_back(value);
    }
    void printData()
    {
        int size = list.size();
        for (int i = 0; i < size; i++)
        {
            cout << list.at(i) << " ";
        }
        cout << endl;
    }

    void print()
    {
        cout << x << endl;
    }
};

class Derived : public Base
{
private:
public:
    Derived(int x1) : Base(x1){};
    void insert(int input)
    {
        Base::list.push_back(input);
    }
};

int main()
{
    Base b1 = Base(2), b2(10);
    for (int i = 0; i < 5; i++)
    {
        b1.setN(i, (i + 1) * 20);
        b2.setN(i, (i + 1) * 10);
    }

    b1.printData();
    b2.printData();

    Derived d(5);
    d.print();     // 5
    d.printData(); // 0 0 0 0 0
    for (int i = 0; i < 5; i++)
    {
        d.setN(i, (i + 1) * 3);
    }
    d.printData(); // 3 6 9 12 15
    d.insert(99);  // "Base" class does not have "insert" method.
    d.printData(); // 3 6 9 12 15 99
}