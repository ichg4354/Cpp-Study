#include <iostream>
#include <vector>

using namespace std;
void swap(int &a, int &b)
{
    int station = a;
    a = b;
    b = station;
}

void printAll(vector<int> &list)
{
    for (int each : list)
    {
        cout << each << endl;
    }
};

void sort(vector<int> &list)
{
    int n = list.size();
    for (int i = 0; i < n - 1; i++)
    {
        int keyVal = i;
        for (int a = i + 1; a < n; a++)
        {
            if (list[keyVal] > list[a])
            {
                keyVal = a;
            }
        }
        swap(list[i], list[keyVal]);
    }
}

int main()
{
    vector<int> list = {3, 4, 7, 1, 2};
    sort(list);
    printAll(list);
}