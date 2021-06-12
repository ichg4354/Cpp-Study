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
        int arraySum = 0;
        for (int b = 0; b < colSize; b++)
        {
            *(*arrPtr + a * rowSize + b) = a + b;
            arraySum += *(*arrPtr + a * rowSize + b);
        }
        cout << "Average of Row" << 0 << " = " << arraySum / rowSize << endl;
        totalSum += arraySum;
    }
    cout << "Average of Array"
         << " = " << totalSum / (rowSize * colSize) << endl;
};

int main()
{
    int twoD[5][5];
    int *ptr = twoD[0];
    Gen1DData(&ptr, 5, 5);
    ComputeAverage(&ptr, 5, 5);
}