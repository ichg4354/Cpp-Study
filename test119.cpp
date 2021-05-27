#include <iostream>
using namespace std;

class Center
{
private:
public:
    int x;
    int y;
    Center(int xx, int yy) : x(xx), y(yy){};
};

class Circle
{
private:
    int r;
    Center circleCenter;

public:
    Circle(int rr, Center c) : r(rr), circleCenter((c.x < -100) ? -100 : (c.x > 100 ? 100 : c.x), (c.y < -100) ? -100 : (c.y > 100 ? 100 : c.y)){};

    Center get_center()
    {
        return circleCenter;
    }
    int get_radius()
    {
        return r;
    }
    double get_perimeter()
    {
        return 2 * 3.14 * this->r;
    };

    double get_area()
    {
        return 3.14 * this->r * this->r;
    }
};

int main()
{
    Circle circlOne = Circle(5, Center(5, 5));
    cout << circlOne.get_area() << endl;
    cout << circlOne.get_radius();
}