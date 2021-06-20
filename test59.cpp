#include <iostream>
using namespace std;

class Person
{
private:
public:
    int privateCode;
    int age;
    int height;
    Person(int c, int a, int h) : privateCode(c), age(a), height(h){};
    void getData()
    {
        cout << age << " " << height << " " << privateCode << endl;
    }
};

class Guy : public Person
{
public:
    bool rich;
    Guy(int c, int a, int h, bool r) : Person(c, a, h), rich(r){};
    void getData()
    {
        cout << age << " " << height << " " << privateCode << " " << rich << endl;
    };
};

int main()
{
    Person man(9898090, 50, 160);
    Guy Luis(3085717, 22, 178, true);
}
