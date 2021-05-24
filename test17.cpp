#include <iostream>
#include <vector>
using namespace std;

int list[5] = {1, 2, 3, 4, 5};
int *pointer;
int *start = list;
int *final = start + 5;

int main()
{
    pointer = start;
    while (pointer != final)
    {
        cout << *pointer;
        pointer++;
    }
}