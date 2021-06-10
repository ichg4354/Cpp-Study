#include <iostream>
using namespace std;

int main()
{
    int **table;
    int a = 5;
    table = new int *[5];
    table[0] = &a;
    cout << *table[0];
}