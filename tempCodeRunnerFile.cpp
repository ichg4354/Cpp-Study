#include <iostream>
using namespace std;

long double value1 = 1;
long double value2;

bool checkBool = true;

float factorial(int n)
{
    float sum = 1;
    for (int i = n; i >= 1; i--)
    {
        sum *= i;
    };
    return sum;
}

int main()
{
    int count = 1;

    while (checkBool)
    {
        value2 = value1 + 1 / factorial(count);
        count++;

        if (value2 - value1 <= 0.000001)
        {
            checkBool = false;
            cout << value2 - value1 << endl;
            cout << count + 1;
        };

        value1 = value2;
    }
}
