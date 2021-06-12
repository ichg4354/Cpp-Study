#include <iostream>
using namespace std;

void Gen1DData(int **arrPtr, int rowSize, int colSize)
{
    for (int a = 0; a < rowSize; a++)
    {
        for (int b = 0; b < colSize; b++)
        {
            *(*arrPtr + a * rowSize + b) = a + b;
            cout << *(*arrPtr + a * rowSize + b) << " ";
        }
        cout << endl;
    }
}

void ComputeAverage(int **arrPtr, int rowSize, int colSize)
{
    int totalSum = 0;
    for (int a = 0; a < rowSize; a++)
    {
        int rowSum = 0;
        for (int b = 0; b < colSize; b++)
        {
            rowSum += *(*arrPtr + a * rowSize + b);
        }
        cout << "Average of Row: " << rowSum / rowSize << endl;
        totalSum += rowSum;
    }
    cout << "Average of Array: " << totalSum / (rowSize * colSize) << endl;
}
int main()
{
    int twoD[5][5];

    int *pointer = twoD[0];
    Gen1DData(&pointer, 5, 5);
    ComputeAverage(&pointer, 5, 5);
}