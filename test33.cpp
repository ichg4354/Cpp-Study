#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
};

void addPersonToMass(int num, Person *Mass)
{
    for (int i = 0; i < num; i++)
    {
        cout << "이름은 ?? ";
        cin >> (Mass + i)->name;
        cout << "나이는 ??";
        cin >> (Mass + i)->age;
        cout << endl;
    }
};

int main()
{
    Person *TheMass = new Person[100];
    addPersonToMass(2, TheMass);

    cout << TheMass->name << TheMass->age << endl;
    cout << (TheMass + 1)->name << (TheMass + 1)->age << endl;
}