#include <iostream>
using namespace std;

class Geek
{
private:
    int money;

public:
    friend Thug;

    Geek(int m) : money(m){};
    void howMuch()
    {
        cout << money << endl;
    }
};

class Thug
{
private:
    int money;

public:
    Thug(int m) : money(m){};
    void howMuch()
    {
        cout << money << endl;
    }
    // void stealMoney(Geek &poorGuy)
    // {
    //     money += poorGuy.money;
    //     cout << "STOlE" << poorGuy.money << endl;
    //     cout << "balance: " << money << endl;
    // }
};

int main()
{
    Thug badGuy(500);
    Geek kindGuy(50000);
}