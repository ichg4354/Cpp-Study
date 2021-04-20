#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <unistd.h>
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
        cout << endl;
        for (int start = 1; start <= length; start++)
        {
            cout << setw(2) << start;
        }
    }
    cout << endl;
}

bool primeCheck(int num)
{
    bool isPrime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
void PrintPatternRand(int n)
{
    const int max = 100;
    const int min = 1;
    srand((unsigned)time(NULL));
    for (int i = n; i > 0; i--)
    {
        usleep(500);
        for (int count = 0; count < i; count++)
        {
            cout << setw(5) << setfill(' ') << rand() % ((max + 1) - min) + 1;
        }
        cout << endl;
    }
}

void CountPrimeNumber(int numCount)
{
    int primeCount = 0;
    const int max = 100;
    const int min = 1;
    srand((unsigned)time(NULL));

    for (int i = 0; i < numCount; i++)
    {
        int ranNum = rand() % ((max + 1) - min) + 1;
        if (primeCheck(ranNum))
        {
            primeCount++;
        }
    }
    cout << "생성된 난수 중 소수의 수 = " << primeCount << endl;
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

        cout << "|"
             << setw(33) << setfill(' ')
             << " 5: Random Print Pattern"
             << "|" << endl;

        cout << "|"
             << setw(33) << setfill(' ')
             << " 6: Random Prime Number"
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
        else if (key == 4)
        {
            cout << "Select an Interger ->";
            cin >> input;
            printPattern(input);
        }
        else if (key == 5)
        {
            cout << "Random # print pattern을 위한 점수를 입력하시오 ->";
            cin >> input;
            PrintPatternRand(input);
        }
        else if (key == 6)
        {
            cout << "난수 소수 수를 계산하기 정수를 입력하시오 ->";
            cin >> input;
            CountPrimeNumber(input);
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
    // CountPrimeNumber(10);
    // PrintPatternRand(15);
}