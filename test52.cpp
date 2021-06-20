#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(vector<int> &list)
{
    for (int i = 0; i < list.size() - 1; i++)
    {
        int min = i;
        for (int a = i + 1; a < list.size(); a++)
        {
            if (list[a] < list[min])
            {
                min = a;
                cout << "Found " << endl;
            }
        }
        swap(list[min], list[i]);
    }
}

// vector<int> list = {5, 3, 4, 7, 1};

void printV(vector<int> list)
{
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> list = {5, 3, 4, 7, 1};
    printV(list);
    selectionSort(list);
    printV(list);
}