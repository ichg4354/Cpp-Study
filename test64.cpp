#include <iostream>
using namespace std;

template <class t>
class Position
{
public:
    t x;
    t y;
    Position(t xx, t yy) : x(xx), y(yy)
    {
        cout << xx + yy << endl;
    }
};

int main()
{
    Position<int> test1(5, 3);
    Position<double> test2(3.4, 5.5);
}