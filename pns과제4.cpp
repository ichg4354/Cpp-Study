#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int A, B;

    cout << "**** "
         << " 2개의 연산자로 구성된 수식 계산 "
         << " ****"
         << "\n\n";

    cout << "세개의 피연산자를 입력하시요 --> ";
    cin >> a >> b >> c;

    cout << "2개의 연산자[ 0 for +, 1 for -, 2 for *, 3 for / ] 를 입력하세요 --> ";
    cin >> A >> B;

    cout << "\n";

    if (A == 0)
    {
        if (B == 0)
        {
            cout << a << " + " << b << " + " << c << " = " << a + b + c << endl;
        }
        else if (B == 1)
        {
            cout << a << " + " << b << " - " << c << " = " << a + b - c << endl;
        }
        else if (B == 2)
        {
            cout << a << " + " << b << " * " << c << " = " << a + b * c << endl;
        }
        else
        {
            cout << a << " + " << b << " / " << c << " = " << a + b / c << endl;
        }
    }
    else if (A == 1)
    {
        if (B == 0)
        {
            cout << a << " - " << b << " + " << c << " = " << a - b + c << endl;
        }
        else if (B == 1)
        {
            cout << a << " - " << b << " - " << c << " = " << a - b - c << endl;
        }
        else if (B == 2)
        {
            cout << a << " - " << b << " * " << c << " = " << a - b * c << endl;
        }
        else
        {
            cout << a << " - " << b << " / " << c << " = " << a - b / c << endl;
        }
    }
    else if (A == 2)
    {
        if (B == 0)
        {
            cout << a << " * " << b << " + " << c << " = " << a * b + c << endl;
        }
        else if (B == 1)
        {
            cout << a << " * " << b << " - " << c << " = " << a * b - c << endl;
        }
        else if (B == 2)
        {
            cout << a << " * " << b << " * " << c << " = " << a * b * c << endl;
        }
        else
        {
            cout << a << " * " << b << " / " << c << " = " << a * b / c << endl;
        }
    }
    else
    {
        if (B == 0)
        {
            cout << a << " / " << b << " + " << c << " = " << a / b + c << endl;
        }
        else if (B == 1)
        {
            cout << a << " / " << b << " - " << c << " = " << a / b - c << endl;
        }
        else if (B == 2)
        {
            cout << a << " / " << b << " * " << c << " = " << a / b * c << endl;
        }
        else
        {
            cout << a << " / " << b << " / " << c << " = " << a / b / c << endl;
        }
    }
}