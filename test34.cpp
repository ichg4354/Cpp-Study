#include <iostream>
#include <fstream>
using namespace std;

int MAXSIZE = 100;

void GenData(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        arr[i] = rand() % 50;
    }

    cout << endl;
};

void DisplayArray(int arr[], int arrSize)
{
    cout << "***    "
         << "Display Array"
         << "   ***"
         << endl;

    int count = 0;
    while (count < arrSize)
    {
        cout << arr[count] << " ";
        count++;
    }

    cout << endl;
};

int FindMax(int arr[], int arrSize)
{
    int Max = arr[0];

    cout << "***    "
         << "Find Max Value "
         << "   ***"
         << endl;

    for (int i = 1; i < arrSize; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }

    cout << "Max value"
         << " = " << Max << endl;

    cout << endl;
}

int main()
{
    int array[MAXSIZE];
    GenData(array, 5);
    DisplayArray(array, 5);
    FindMax(array, 5);
}
