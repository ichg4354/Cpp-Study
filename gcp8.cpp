#include <iostream>
#include <vector>
using namespace std;

void tree(int n)
{
    int middle = n / 2;
    for (int i = 0; i <= middle; i++)
    {
        for (int a = 0; a < middle - i; a++)
        {
            cout << " ";
        }
        for (int b = 0; b < i + 1; b++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    for (int i = 0; i < middle; i++)
    {
        for (int a = 0; a < i + 1; a++)
        {
            cout << " ";
        }
        for (int b = 0; b < middle - i; b++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}

int main()
{
    tree(5);
}