#include <iostream>
#include <stdlib.h>
using namespace std;

const int size = 20;

bool isIn(int num, int array[])
{
    bool Result = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == num)
        {
            Result += 1;
        }
    }
    if (Result == 1)
    {
        // cout << "is In";
        return 1;
    }
    // cout << "Is Not In";
    return 0;
}

int testArray[size] = {1, 2, 3, 4};

void fillArray(int array[])
{
    for (int i = 0; i < size; i++)
    {
        int ranNum;
        do
        {
            ranNum = rand() % size;
            cout << ranNum << " ";
        } while (isIn(ranNum, array));
        array[i] = ranNum;
        cout << ranNum << " ";
    }
}


int main()
{
    // fillArray(testArray);
}