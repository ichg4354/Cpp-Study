#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

vector<int> box = {1, 2, 3};
int random(int begin, int end)
{
    if (begin >= end)
        return 0;
    else
    {
        int range = end - begin;
        return begin + rand() % range;
    }
}
void permute(std::vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        std::swap(a[i], a[random(i, n)]);
    }
}

void show(vector<int> &box)
{
    for (int each : box)
    {
        cout << each << endl;
    }
}

int main()
{
    permute(box);
    show(box);
    permute(box);
    show(box);

}