#include <iostream>
using namespace std;

void mouth(int (*func)(int, int))
{
    int a, b;
    cin >> a >> b;
    cout << func(a, b) << endl;
}

int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    mouth(Sum);
}