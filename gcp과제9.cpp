#include <iostream>
#include <vector>

using namespace std;

vector<int> list = {1,2,3,4,5,5};

bool is_ascending(std::vector<int> &list)
{
    for (int i = 0; i < list.size() - 1; i++)
    {
        if (list[i] > list[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    cout << is_ascending(list) << endl;
}