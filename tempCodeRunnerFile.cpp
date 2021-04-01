#include <iostream>
using namespace std;
int main()
{
    int userNum;
    cout << "Please enter a number -->: ";
    cin >> userNum;

    if (userNum >= 1 && userNum <= 100)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "OUT OF RANGE" << endl;
    }
}