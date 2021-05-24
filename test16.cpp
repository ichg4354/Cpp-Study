#include <vector>
#include <iostream>
using namespace std;

vector<int> list1 = {1, 2, 3, 4, 5, 6};
vector<int> list2 = {1, 2, 3, 4, 5, 6};
vector<int> list3 = {2, 3, 4, 5, 6, 1};

bool equals(const vector<int> &list1, const vector<int> &list2)
{
    bool equals = true;
    for (int i = 0; i < list1.size(); i++)
    {
        if (list1[i] != list2[i])
        {
            equals = false;
        }
    }
    return equals;
}

int main()
{
    cout << equals(list1, list3);
}