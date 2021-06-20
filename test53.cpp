#include <iostream>
using namespace std;

void sayHi(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "HELLO WORLD" << endl;
    }
};

void eatFunc(void(func)(int))
{
    cout << "How many times ->>";
    int n = 0;
    cin >> n;
    func(n);
};

int main()
{
    eatFunc(sayHi);
}