#include <iostream>
using namespace std;

void Gen1DData(int **arrPtr, int rowSize, int colSize)
{
    for (int r = 0; r < rowSize; r++)
    {
        for (int c = 0; c < colSize; c++)
        {
            arrPtr[r][c] = r * rowSize + c;
            cout << arrPtr[r][c] << " ";
        }
        cout << endl;
    }

    cout << *(arrPtr[2] + 2) << endl;
};

int main()
{
    int r;
    int c;
    cout << "insert row and coloumn -> ";
    cin >> r >> c;

    int **ptr = new int *[r];
    for (int i = 0; i < r; i++)
    {
        ptr[i] = new int[c];
    }
    Gen1DData(ptr, r, c);
}