#include <iostream>
#include <fstream>
using namespace std;

struct Person
{
    string name;
    string position;
    int salary;
};

int num = 0;

int ReadData(Person master[], int &num)
{
    ifstream InputStream;

    InputStream.open("text.txt");

    bool flag = true;

    int count = 0;
    if (!InputStream)
    {
        return 0;
    }
    else
    {
        while (!InputStream.eof())
        {
            InputStream >> master[count].name >> master[count].position >> master[count].salary;
            count++;
        }
    }
    num = count;
    return 1;
};

void PrintPersonData(Person master[], int index)
{
    cout << "사번 " << index << "  "
         << "   직원명:  " << setw(10) << master[index].name
         << "   근무처:  " << setw(15) << master[index].position
         << "   연봉:  " << setw(15) << master[index].salary
         << endl;
};

void DisplayStructData(Person master[], int num)
{
    for (int i = 0; i < num; i++)
    {
        PrintPersonData(master, i);
    }
}

void Select(Person master[], int num)
{
    int sum;
    for (int i = 0; i < num; i++)
    {
        sum += master[i].salary;
    }

    int average = sum / num;

    cout << "평균연봉: " << average << endl;

    for (int i = 0; i < num; i++)
    {
        if (master[i].salary > average)
        {
            PrintPersonData(master, i);
        }
    }
    cout << endl;
}

void FindStruct(Person master[], int num)
{
    string inputName;
    string inputPosition;
    cout << "직원명과 근무처를 입력하세요 -->";
    cin >> inputName >> inputPosition;

    int count = 0;

    for (int i = 0; i < num; i++)
    {
        if (master[i].name == inputName && master[i].position == inputPosition)
        {
            PrintPersonData(master, i);
            count++;
        }
    }

    if (count == 0)
    {
        cout << inputName << " "
             << "입력된 직원이 존재하지 않음" << endl;
    }
}
int main()
{
    Person List[10];
    ReadData(List, num);
    // DisplayStructData(List, num);
    // Select(List, num);
    FindStruct(List, num);
}