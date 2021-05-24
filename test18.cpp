#include <iostream>
#include <vector>
using namespace std;

int list1[5] = {1, 2, 3, 4, 10};
int count_negatives(int a[10][10])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int a = 0; i < 10; a++)
        {
            if (a[i][a] < 0)
            {
                sum += a[i][a];
            }
        }
    }
}
int main()
{
    count_negatives;
}