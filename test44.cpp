#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> list = {1, 2, 3};

    int *ptr = &list[0];
    int *end = &list[2];

    while (ptr <= end)
    {
        cout << *ptr << " ";
        ptr += 1;
    }
}
