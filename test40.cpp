#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

string name;
string author;
int price;
int date;

string names[10];
string authors[10];
int prices[10];
int dates[10];

struct Book
{
    string name;
    string author;
    int price;
    int date;
};

int num = 0;

void printLine()
{
    cout << setfill('=') << setw(50) << '=' << endl;
}

void printTitle()
{
    printLine();

    setfill(' ');

    cout << left;

    cout
        << "| "
        << "0: Quit" << setfill(' ') << right << setw(40) << "|" << endl;
    cout << left;
    cout << "| "
         << "1: 1번 문제 - " << setfill(' ') << setw(40) << "서적 정보 입출력"
         << " |" << endl;
    cout << "| "
         << "2: 2번 문제 - " << setfill(' ') << setw(40) << "다수 서적 정보 입출력"
         << " |" << endl;
    cout << "| "
         << "3: 3번 문제 - " << setfill(' ') << setw(40) << "서적정보 파일 입출력"
         << " |" << endl;
    cout << "| "
         << "4: 4번 문제 - " << setfill(' ') << setw(40) << "구조체-다수 서적정보 파일 입출력"
         << " |" << endl;
    cout << "| "
         << "5: 5번 문제 - " << setfill(' ') << setw(40) << "구조체-배열 동적할당"
         << " |" << endl;
    printLine();
}

void ReadARecord(string &name, string &author, int &price, int &date)
{
    cout << "책 제목 입력 ->";
    cin >> name;
    cout << "저자 이름 입력 ->";
    cin >> author;
    cout << "가격 입력 ->";
    cin >> price;
    cout << "춢판일(년월일: 20191210) 입력 ->";
    cin >> date;
};

void ReadARecord(string *name, string *author, int *price, int *date)
{
    cout << "책 제목 입력 ->";
    cin >> *name;
    cout << "저자 이름 입력 ->";
    cin >> *author;
    cout << "가격 입력 ->";
    cin >> *price;
    cout << "춢판일(년월일: 20191210) 입력 ->";
    cin >> *date;
};

void DisplayARecord(string name, string author, int price, int date)
{
    cout << "제목: " << name << endl;
    cout << "저자 이름: " << author << endl;
    cout << "가격: " << price << endl;
    cout << "출판일: " << date << endl;
};

void ReadAllRecords(string names[], string authors[], int prices[], int dates[])
{
    for (int i = 0; i < 2; i++)
    {
        ReadARecord(names[i], authors[i], prices[i], dates[i]);
    }
};

void DisplayAllRecords(string names[], string authors[], int prices[], int dates[])
{
    for (int i = 0; i < 2; i++)
    {
        cout << "제목: " << names[i] << endl;
        cout << "저자 이름: " << authors[i] << endl;
        cout << "가격: " << prices[i] << endl;
        cout << "출판일: " << dates[i] << endl;
        cout << endl;
    }
};
int ReadAllRecordsFrFile(string names[], string authors[], int prices[], int dates[], int &num)
{
    ifstream InputStream;

    string target;
    cout << "책정보가 저장된 파일이름 입력-> ";
    cin >> target;

    InputStream.open(target);
    if (!InputStream)
    {
        return 0;
    }
    else
    {
        InputStream >> num;
        for (int i = 0; i < num; i++)
        {
            InputStream >> names[i] >> authors[i] >> prices[i] >> dates[i];
        }
    }
    return 1;
}

void Average(int prices[], int dates[], int num)
{
    int total = 0;
    int startDate;
    int endDate;

    int count = 0;
    cout << "검색할 기간(시작일과 종료일)을 입력->";
    cin >> startDate >> endDate;

    for (int i = 0; i < num; i++)
    {
        if (dates[i] > startDate || dates[i] < endDate)
        {
            total += prices[i];
            count++;
        }
    }
    cout << "평균가격? " << (total / count) << endl;
}

void ReadAllRecords(Book bookList[])
{
    for (int i = 0; i < 2; i++)
    {
        ReadARecord(bookList[i].name, bookList[i].author, bookList[i].price, bookList[i].date);
    }
};

void DisplayAllRecords(Book bookList[])
{
    for (int i = 0; i < 2; i++)
    {
        DisplayARecord(bookList[i].name, bookList[i].author, bookList[i].price, bookList[i].date);
    }
};

Book *ReadAllRecordsFrFile(int *num)
{
    ifstream InputStream;

    Book newBookList[10];

    InputStream.open("data.txt");

    InputStream >> *num;

    Book *ReadAllRecordsFrFile = newBookList;

    for (int i = 0; i < *num; i++)
    {
        InputStream >> newBookList[i].name >> newBookList[i].author >> newBookList[i].price >> newBookList[i].date;
    }

    return ReadAllRecordsFrFile;
};
int main()
{
    bool key = true;
    int input;

    while (key)
    {
        printTitle();
        cout << "Select a Function ->";
        cin >> input;

        if (input == 0)
        {
            key = false;
        }
        else if (input == 1)
        {
            ReadARecord(name, author, price, date);
            DisplayARecord(name, author, price, date);
        }
        else if (input == 2)
        {
            ReadAllRecords(names, authors, prices, dates);
            DisplayAllRecords(names, authors, prices, dates);
        }
        else if (input == 3)
        {
            ReadAllRecordsFrFile(names, authors, prices, dates, num);
            Average(prices, dates, num);
        }
        else if (input == 4)
        {
            Book bookList[100];
            ReadAllRecords(bookList);
        }
        else if (input == 5)
        {
            Book *ptr;
            ptr = ReadAllRecordsFrFile(&num);
        }
    }
}