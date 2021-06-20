#include <iostream>
using namespace std;

class Box
{
private:
    int x;
    int y;

public:
    Box(int xx, int yy) : x(xx), y(yy){};
    Box(){};
    Box operator+(Box b)
    {
        return Box(x + b.x, y + b.y);
    }
    void printValues()
    {
        cout << x << " : " << y << endl;
    }
    friend ostream &operator<<(ostream &os, Box a);
};

ostream &operator<<(ostream &os, Box a)
{
    os << a.x << " : " << a.y;
    return os;
};

int main()
{
    Box a = Box(5, 12);
    Box b = Box(2, 10);
    Box c;
    c = a + b;
    cout << c << endl;
}