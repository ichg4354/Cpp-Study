#include <iostream>
#include <iomanip>
using namespace std;

void Gen1DData(int **arrPtr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arrPtr[i][j] = i + j;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arrPtr[i][j] << " ";
        }
        cout << endl;
    }

    cout << arrPtr << endl;

    for (int i = 0; i < r; i++)
    {
        for (int a = 0; a < c; a++)
        {
            cout << *(arrPtr[i] + a) << " ";
            cout << setw(5) << (arrPtr[i] + a) << " ";
        }
        cout << endl;
    }
};

int main()
{
    int c, r;
    cin >> r >> c;
    int **pointer;
    pointer = new int *[r];
    for (int i = 0; i < r; i++)
        pointer[i] = new int[c];

    Gen1DData(pointer, c, r);

    for (int i = 0; i < r; i++)
        delete[] pointer[i];
    delete[] pointer;
}