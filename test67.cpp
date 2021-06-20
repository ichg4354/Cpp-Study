#include <iostream>
using namespace std;

bool check(int a, int target)
{
    return a < target;
}

void eatCheck(bool (*checker)(int, int))
{
    if (checker(5, 7))
    {
        cout << "IM RICH" << endl;
    }
    else
    {
        cout << "ill become rich" << endl;
    }
};

int main()
{
    eatCheck(check);
}