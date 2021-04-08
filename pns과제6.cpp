#include <iostream>
#include <iomanip>
using namespace std;

void sumOfInterger(int num)
{
    int sum;
    cout << "Sum of Interger from 1 to " << num << endl;
    for (int i = 1; i <= num; i++)
    {
        sum += num;
        if (i < num)
        {
            cout << i << " + ";
        }
        else
        {
            cout << i;
        }
    }
    cout << " = " << sum << endl;
}

void factorial(int n)
{
    int sum = 1;
    cout << "Factorial of " << n << endl;
    for (int a = n; a > 0; a--)
    {
        sum *= a;
        if (a == 1)
        {
            cout << a;
        }
        else
        {
            cout << a << " * ";
        }
    }
    cout << " = " << sum << endl;
}

void primeChecker(int num)
{
    bool isPrime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not a prime number" << endl;
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << num << " is a prime number" << endl;
    }
}

void printPattern(int length)
{
    cout << "Print pattern of " << length;
    for (; length > 0; length--)
    {
        cout << setfill(' ');
        cout
            << endl;
        for (int start = 1; start <= length; start++)
        {
            cout << setw(2) << start;
        }
    }
    cout << endl;
}

void functionHandler()
{
    int key;
    int input;
    do
    {
        cout << "Select a function" << endl;
        cout << setiosflags(ios::left);
        cout
            << setw(35) << setfill('=') << "=" << endl;
        cout << "|"
             << setw(33) << setfill(' ')
             << " 1: Sum of Intergers"
             << "|" << endl;

        cout << "|"
             << setw(33) << setfill(' ')
             << " 2: Compute Factorial"
             << "|" << endl;

        cout << "|"
             << setw(33) << setfill(' ')
             << " 3: Check Prime Number"
             << "|" << endl;

        cout << "|"
             << setw(33) << setfill(' ')
             << " 4: Print Pattern"
             << "|" << endl;

        cout
            << setw(35) << setfill('=') << "=" << endl;

        cin >> key;
        if (key == 1)
        {
            cout << "Select an Interger ->";
            cin >> input;
            sumOfInterger(input);
        }
        else if (key == 2)
        {
            cout << "Select an Interger ->";
            cin >> input;
            factorial(input);
        }
        else if (key == 3)
        {
            cout << "Select an Interger ->";
            cin >> input;
            primeChecker(input);
        }
        else if (key == 4)
        {
            cout << "Select an Interger ->";
            cin >> input;
            printPattern(input);
        }
        else
        {
            break;
        }
    } while (key != 0);
}

int main()
{
    // factorial(5);
    // primeChecker(9);
    // printPattern(7);
    // sumOfInterger(5);
    functionHandler();
}