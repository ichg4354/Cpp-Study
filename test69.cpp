#include <iostream>
using namespace std;

enum class Colors
{
    Red,
    Green,
    Yellow
};

class TrafficLight
{
public:
    Colors color;
    TrafficLight(Colors c) : color(c){};

    Colors getColor() const
    {
        return color;
    }

    void changeColor()
    {
        if (color == Colors::Green)
        {
            color = Colors::Yellow;
        }
        else if (color == Colors::Yellow)
        {
            color = Colors::Red;
        }
        else
        {
            color = Colors::Green;
        }
    }
};

void print(TrafficLight lt)
{
    Colors color = lt.getColor();
    std::cout << "+-----+\n";
    std::cout << "| |\n";
    if (color == Colors::Red)
        std::cout << "| (R) |\n";
    else
        std::cout << "| ( ) |\n";
    std::cout << "| |\n";
    if (color == Colors::Yellow)
        std::cout << "| (Y) |\n";
    else
        std::cout << "| ( ) |\n";
    std::cout << "| |\n";
    if (color == Colors::Green)
        std::cout << "| (G) |\n";
    else
        std::cout << "| ( ) |\n";
    std::cout << "| |\n";
    std::cout << "+-----+\n";
}

int main()
{
    TrafficLight light(Colors::Green);
    while (true)
    {
        print(light);
        light.changeColor();
        std::cin.get();
    }
}