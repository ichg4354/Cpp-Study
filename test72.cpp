#include <iostream>
#include <vector>
using namespace std;

class Base
{
public:
    int size = 0;
    vector<int> list;
    Base(){};
    Base(int n) : size(n), list(n, 0){};
    void setN(int index, int value)
    {
        list[index] = value;
    }
    void print()
    {
        cout << size << endl;
    }
    void printData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << list[i] << " ";
        }
        cout << endl;
    };
};

class Derived : public Base
{
public:
    Derived(){};
    Derived(int d) : Base(d){};
    void insert(int v)
    {
        size++;
        list.push_back(v);
    }
};

int main()
{
    Base b1(2), b2(10);
    for (int i = 0; i < 5; i++)
    {
        b1.setN(i, (i + 1) * 20);
        b2.setN(i, (i + 1) * 10);
    }
    b1.printData();
    b2.printData();

    Derived d(5);
    d.print();
    d.printData();
    for (int i = 0; i < 10; i++)
    {
        d.setN(i, (i + 1) * 3);
    }
    d.printData();
    d.insert(99);

    d.printData();
}