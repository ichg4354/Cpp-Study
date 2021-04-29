#include <iostream>
#include <iomanip>
using namespace std;

void answer1(int a, int b, int c)
{

    if (a > b)
    {
        if (c < b)
        {
            cout << "(a,b,c): " << '(' << a << ',' << b << ',' << c << ')' << endl;
        }
        else if (c > b)
        {
            cout << "(a,c,b): " << '(' << a << ',' << c << ',' << b << ')' << endl;
        }
    }
    else if (b > c)
    {
        if (a > c)
        {
            cout << "(b,a,c): " << '(' << b << ',' << a << ',' << c << ')' << endl;
        }
        else if (a < c)
        {
            cout << "(b,c,a): " << '(' << b << ',' << c << ',' << a << ')' << endl;
        }
    }
    else if (c > a)
    {
        if (b > a)
        {
            cout << "(c,b,a): " << '(' << c << ',' << b << ',' << a << ')' << endl;
        }
        else if (b < a)
        {
            cout << "(c,a,b): " << '(' << c << ',' << a << ',' << b << ')' << endl;
        }
    }
}

void answer2()
{
    float sum = 0;
    float counter = 0;
    cout << "정수를 최대 5개까지 입력하십시오(0을 입력하면 입력 중단 \n"
         << endl;
    for (int i = 1; i < 6; i++)
    {
        float input;
        cout << i << "번쨰 정수를 입력(중단하고 싶으면 0입력 -->";
        cin >> input;
        if (input == 0)
        {
            break;
        }
        else
        {
            sum += input;
        }
        counter += 1.0;
    }
    cout << "평균 = " << setprecision(4) << sum / counter << " , "
         << " 읽어들인 정수 수 = " << counter << endl;
}

void answer3(int n)
{
    int size;
    cout << "도형의 크기 입력 -->";
    cin >> size;

    int last = size - 1;
    for (int i = 0; i < size; i++)
    {
        cout << '\t';
        for (int z = 0; z < size; z++)
        {

            if (i == 0 || z == 0 || i == last || z == last)
            {
                cout << "*";
            }
            else if (i == z)
            {
                cout << "*";
            }
            else if (z == last - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
}
// ********
// *######*
// #******#
// ##****##
// ###**###
// ###**###
// ##****##
// #******#
// *######*
// ********
void DisplayBottom()
{
    cout << '\t';
    cout << '*' << setw(50 - 3) << setfill('-') << '-' << '*' << endl;
}

void DisplayARow(int num, string name, int mid, int fnl)
{
    cout << fixed << setprecision(2);
    double average = (mid + fnl) / 2.0;
    cout << '\t';
    cout << '*' << setw(50 - 3) << setfill('-') << '-' << '*' << endl;
    cout << '\t'
         << "|" << setw(10 - 2) << setfill(' ') << num
         << " |" << setw(10 - 2) << setfill(' ') << name
         << " |" << setw(10 - 2) << setfill(' ') << mid
         << " |" << setw(10 - 2) << setfill(' ') << fnl
         << " |" << setw(10 - 2) << setfill(' ') << average
         << " |" << endl;
}

void GetRecord()
{

    int mid1, fnl1, mid2, fnl2, mid3, fnl3;
    string name1, name2, name3;

    cout << 1 << "번째 학생의 이름. 중간고사. 기발고사 입력 -->";
    cin >> name1 >> mid1 >> fnl1;
    cout << 2 << "번째 학생의 이름. 중간고사. 기발고사 입력 -->";
    cin >> name2 >> mid2 >> fnl2;
    cout << 3 << "번째 학생의 이름. 중간고사. 기발고사 입력 -->";
    cin >> name3 >> mid3 >> fnl3;

    DisplayARow(1, name1, mid1, fnl1);
    DisplayARow(2, name2, mid2, fnl2);
    DisplayARow(3, name3, mid3, fnl3);
    DisplayBottom();
}
int GetRand(int min, int max)
{
    static int flag = true;

    if (flag)
    { // 처음 한번만 seed를 세팅한다.
        srand((unsigned)time(NULL));
        flag = false;
    }
    int temp = rand() % ((max + 1) - min) + min;
    return (temp);
}

int GetScore(int min, int max)
{
    int value = GetRand(min, max);
    int left = value;
    int sum = 0;
    cout << value << endl;
    int four = left / 1000;
    left = left % 1000;
    int three = left / 100;
    left = left % 100;
    int two = left / 10;
    left = left % 10;
    int one = left;
    sum = four + three + two + one;
    cout << "생성된 난수:  " << value << "  Digit Sum : "
         << "    " << sum << endl;
    return sum;
}

void Play()
{
    int aScore, bScore = 0;
    char Winner;
    for (int i = 0; i < 3; i++)
    {
        int a = GetScore(1000, 9999);
        int b = GetScore(1000, 9999);
        if (a > b)
        {
            aScore += 1;
        }
        else
        {
            bScore += 1;
        }
    }
    cout << "결과: A 승리 " << aScore << " 번"
         << "B 승리 " << bScore << " 번" << endl;

    Winner = (aScore > bScore ? 'A' : 'B');

    cout << "최종 " << Winner << " 승리" << endl;
}

void testAnswer()
{
    cout << '*' << setw(50) << setfill('-') << '-' << '*' << endl;
    cout << "| " << setw(10) << setfill(' ') << "최민석";
    cout << "| " << setw(10) << setfill(' ') << 1 << '|';
    cout << "| " << setw(10) << setfill(' ') << 1 << 355;
    cout << "| " << setw(10) << setfill(' ') << 1 << 32.23 << "|" << endl;
}

int main()
{
    // GetScore(1000, 9999);
    // Play();
    // GetRecord();
    // answer3(10);
    testAnswer();
}
// ********
// *######*
// #******#
// ##****##
// ###**###
// ###**###
// ##****##
// #******#
// *######*
// ********