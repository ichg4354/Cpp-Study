#include <iostream>
using namespace std;

void sayHi(string *name)
{
    cout << "HI"
         << " " << *name << endl;
};

int main()
{
    string name = "LUIS";
    sayHi(&name);
}