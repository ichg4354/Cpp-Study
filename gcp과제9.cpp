#include <iostream>
#include <vector>

using namespace std;

vector<int> list = {1,2,3,4,5};

bool balanced(const vector<int> &list)
{
    vector<int> even;
    vector<int> odd;
    for (int each : list)
    {
        if (each % 2 == 0)
        {
            even.push_back(each);
        }
        else
        {
            odd.push_back(each);
        }
    }
    if (even.size() == odd.size())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << balanced(list) << endl;
}