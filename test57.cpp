#include <iostream>
using namespace std;

int gcdT(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    cout << a << endl;
    return a;
}

int gcd(int a, int b)
{
    int small = a < b ? a : b;
    int big = a > b ? a : b;
    int answer = 0;
    for (int i = 1; i <= small; i++)
    {
        if (big % i == 0)
        {
            answer = i;
        }
    }
    cout << answer << endl;
    return answer;
}

int lcm(int a, int b)
{
    int small = a < b ? a : b;
    int big = a > b ? a : b;
    int answer = gcd(a, b) * small;
    for (int i = 1; i <= big; i++)
    {
        if (big % (small * i) == 0)
        {
            answer = small * i;
        }
    }
    return answer;
}

int main()
{
    gcdT(8, 7);
    // cout << lcm(7, 8) << endl;
}