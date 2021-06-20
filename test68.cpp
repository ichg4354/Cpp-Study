#include <vector>
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
};

void printAll(const vector<int> &list)
{
    for (int each : list)
    {
        cout << each << " ";
    }
}

void sort(vector<int> &list)
{
    int n = list.size();
    for (int i = 0; i < n - 1; i++)
    {
        int keyValIndex = i;
        for (int a = i + 1; a < n; a++)
        {
            if (list[a] < list[keyValIndex])
            {
                keyValIndex = a;
            }
        }
        swap(list[keyValIndex], list[i]);
    }
}

int main()
{
    vector<int> list = {4, 1, 7, 2, 5};
    sort(list);
    printAll(list);
}