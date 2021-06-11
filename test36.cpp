#include <iostream>
#include <cmath>
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
        int sum = 0;
        for (int b = 0; b < colSize; b++)
        {
            sum += *(*arrPtr + a * rowSize + b);
        }
        totalSum += sum;
        cout << "Average of Row"
             << " " << a << " = " << ceil(sum / rowSize) << endl;
    }
    cout << "Average of array"
         << " = " << ceil(totalSum / (rowSize * colSize)) << endl;
};

int main()
{
    int list[3][3];
    list[0][1] = 3;
    int *pointer = list[0];
    Gen1DData(&pointer, 3, 3);
    // cout << list[0][1] << endl;
    ComputeAverage(&pointer, 3, 3);
};