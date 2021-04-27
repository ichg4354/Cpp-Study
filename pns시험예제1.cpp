#include <iostream>
#include <iomanip>
using namespace std;

void PrintNumDiv3()
{
    int a, b;
    cout << "Enter two inter number -->";
    cin >> a >> b;
    cout << '\t'
         << "|"
         << setw(11) << setfill('-') << "|"
         << setw(11) << setfill('-') << "|"
         << setw(11) << setfill('-') << "|"
         << endl;

    cout << '\t'
         << setiosflags(ios::left)
         << "|" << setw(10) << setfill(' ') << "prec 1"
         << "|" << setw(10) << setfill(' ') << "prec 2"
         << "|" << setw(10) << setfill(' ') << "prec 3"
         << "|" << endl;

    cout << '\t'
         << setiosflags(ios::right)
         << setprecision(1)
         << "|" << setw(10) << setfill('.') << a / 3.
         << setprecision(2)
         << "|" << setw(10) << setfill(' ') << a / 3.
         << setprecision(3)
         << "|" << setw(10) << setfill(' ') << a / 3.
         << "|" << endl;

    cout << '\t'
         << "|"
         << setw(11) << setfill('-') << "|"
         << setw(11) << setfill('-') << "|"
         << setw(11) << setfill('-') << "|"
         << endl;

    cout << '\t'
         << setiosflags(ios::right)
         << setprecision(1)
         << "|" << setw(10) << setfill('.') << b / 3.
         << setprecision(2)
         << "|" << setw(10) << setfill(' ') << b / 3.
         << setprecision(3)
         << "|" << setw(10) << setfill(' ') << b / 3.
         << "|" << endl;

    cout << '\t'
         << "|"
         << setw(11) << setfill('-') << "|"
         << setw(11) << setfill('-') << "|"
         << setw(11) << setfill('-') << "|"
         << endl;
}

void Sort(int num1, int num2)
{
    int temp = num2;
    if (num1 < num2)
    {
        num2 = num1;
        num1 = temp;
    }
    cout << " Result : " << num1 << " , " << num2 << endl;
}

void Power(int x, int y)
{
    int answer = 1;
    for (int i = 0; i < y; i++)
    {
        answer *= x;
    }
    cout << x << " 의 " << y << " 승은 " << answer << endl;
}

void Power(float x, int y)
{
    float answer = 1.;
    for (int i = 0; i < y; i++)
    {
        answer *= x;
    }
    cout << x << " 의 " << y << " 승은 " << answer << endl;
}

int main()
{
    int input;
    do
    {
        cout << "Enter step number to be excuted(0 for exit) -->";
        cin >> input;
        if (input == 1)
        {
            cout << "\n [단계 1: 두 정수를 읽어 3으로 나눈 값을 형식에 맞추어 출력] \n"
            << endl;
            PrintNumDiv3();
        }
        else if (input == 2)
        {
            int num1, num2;
            cout << "\n [단계 2: 두 정수를 읽어 내림차순으로 정렬하여 출력] \n";
            cout << "Enter 2 integer -->";
            cin >> num1 >> num2;
            Sort(num1, num2);
        }
        else if (input == 3)
        {
            cout << "\n [단계 3: 정수 X의 Y승 계산] \n";
            int x, y;
            cout << " Enter X and Y ->  ";
            cin >> x >> y;
            Power(x, y);
        }
        else if (input == 4)
        {
            cout << "\n [단계 3: 실수 X의 Y승 계산] \n";
            float x, y;
            cout << " Enter X and Y ->  ";
            cin >> x >> y;
            Power(x, y);
        }

    } while (input != 0);
}
