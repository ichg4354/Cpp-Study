#include <iostream>
#include <fstream>
using namespace std;

struct Person
{
    string name;
    string position;
    int salary;
};

int ReadData(Person master[], int num)
{
    string title = "text.txt";

    ifstream inputStream;

    inputStream.open(title);

    char value;

    int count = 0;

    if (!inputStream)
    {
        return 0;
    }
    else
    {
        while (count != num)
        {
            inputStream >> master[count].name >> master[count].position >> master[count].salary;
            count++;
        }
    }
    return 1;
};

void PrintPerson(Person master[], int num)
{
    cout << " 사 번" << num
         << "   직원명:"
         << setw(15) << master[num].name
         << "   근무처:"
         << setw(20) << master[num].position
         << "   연봉:"
         << setw(15) << master[num].salary
         << endl;
}

void DisplayStructData(Person master[], int num)
{
    for (int i = 0; i < num; i++)
    {
        PrintPerson(master, i);
    }
};

void Select(Person master[], int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += master[i].salary;
    }

    int average = sum / num;

    cout << "   평균연봉: " << average << endl;

    for (int i = 0; i < num; i++)
    {
        if (master[i].salary > average)
        {
            PrintPerson(master, i);
        }
    }
};

void FindStruct(Person master[], int num)
{
    string inputName;
    string inputPosition;

    int count = 0;

    cout << "직원이름과 근무처를 입력하세요 -->";
    cin >> inputName >> inputPosition;

    for (int i = 0; i < num; i++)
    {
        if (master[i].name == inputName && master[i].position == inputPosition)
        {
            PrintPerson(master, i);
            count++;
        }
    }
    if (count == 0)
    {
        cout << inputName << "  입력된 직원이 존재하지 않음" << endl;
    }
};
int main()
{
    Person PersonList[100];
    ReadData(PersonList, 5);
    // Select(PersonList, 5);
    FindStruct(PersonList, 5);
}