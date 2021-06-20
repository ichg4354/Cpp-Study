#include <iostream>
using namespace std;

class Position
{
public:
    int x;
    int y;
    Position(){};
    Position(int xx, int yy) : x(xx), y(yy){};
    void printPosition()
    {
        cout << x << ":" << y << endl;
    }
    Position shiftHorizontal(int i)
    {
        return Position(x + i,-+ y);
    }
};

Position shiftVertical(int i, Position pos)
{
    return Position(pos.x, pos.y + i);
}

int main()
{
    Position place = Position(5, 5);
    Position newPlace = shiftVertical(5, place).shiftHorizontal(5);
    newPlace.printPosition();
}