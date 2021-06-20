#include <iostream>
#include <vector>
using namespace std;

void printV(vector<int> *test){
    // for (int i = 0; i < test.size(); i++)
    // {
    //     cout << test[i] << " ";
    // }
};

void printA(int *array[]){
    // cout << array << endl;
};

void get2dArray(int array[][2])
{
    cout << *(array) << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int a = 0; a < 2; a++)
    //     {
    //         cout << *(*(array + i) + a) << " ";
    //     }
    //     cout << endl;
    // }
}

void get2dArrayByPointer(int **pointer)
{
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int a = 0; a < 2; a++)
    //     {
    //         cout << *(*pointer + i * 2 + a) << " ";
    //     }
    //     cout << endl;
    // }
    cout << *pointer << endl;
    // cout << **(pointer + 1) << endl;
};

int main()
{
    vector<int> test = {1, 2, 3, 4, 5};
    int array[2][2] = {{5, 4}, {3, 2}};
    for (int i = 0; i < 2; i++)
    {
        for (int a = 0; a < 2; a++)
        {
            cout << array[i][a] << " ";
            cout << &array[i][a] << " ";
        }
        cout << endl;
    }

    int *ptr = array[0];
    cout << endl;

    // cout << array[0] << endl;
    // cout << endl;

    // cout << *ptr << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // cout << endl;

    get2dArrayByPointer(&ptr);
    cout << endl;

    get2dArray(array);
    // int *ptr = array[0];
    // int *ptrr = array;
    // cout << *(ptr + 3);
}
