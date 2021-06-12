#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

string title;
string author;
int price;
int date;

string titles[5];
string authors[5];
int prices[5];
int dates[5];

struct Book
{
    string title;
    string author;
    int price;
    int date;
};

int num = 0;

void drawLine()
{
    cout << setfill('=') << setw(50) << "=" << endl;
}

void ReadARecord(string title, string author, int price, int date)
{
    cout << "책 제목 입력 ->";
    cin >> title;

    cout << "저자 이름 입력 ->";
    cin >> author;

    cout << "가격 입력 ->";
    cin >> price;

    cout << "출판일 입력(년월일: 20190103)->";
    cin >> date;
}

void ReadARecord(string *title, string *author, int *price, int *date)
{
    cout << "책 제목 입력 ->";
    cin >> *title;

    cout << "저자 이름 입력 ->";
    cin >> *author;

    cout << "가격 입력 ->";
    cin >> *price;

    cout << "출판일 입력(년월일: 20190103)->";
    cin >> *date;
}

void DisplayARecord(string title, string author, int price, int date)
{
    cout << "제목: " << title << endl;
    cout << "저자 이름: " << author << endl;
    cout << "가격: " << price << endl;
    cout << "출판일: " << date << endl;
}

void printTitle()
{
    cout << endl;
    drawLine();
    cout << "| "
         << "0:"
         << left
         << setfill(' ')
         << setw(45)
         << "Quit"
         << "|" << endl;

    cout
        << "| "
        << "1:"
        << left
        << setfill(' ')
        << setw(45)
        << "1번 문제 - 서적 정보 입출력"
        << "|" << endl;

    cout << "| "
         << "2:"
         << left
         << setfill(' ')
         << setw(45)
         << "2번 문제 - 다수 서적 정보 입출력"
         << "|" << endl;

    cout << "| "
         << "3:"
         << setfill(' ')
         << setw(45)
         << "3번 문제 - 서적 정보 파일 입출력"
         << "|" << endl;

    cout << "| "
         << "4:"
         << setfill(' ')
         << setw(45)
         << "4번 문제 - 구조체 다수 서적정보 파일 입출력"
         << "|" << endl;

    cout << "| "
         << "5:"
         << setfill(' ')
         << setw(45)
         << "5번 문제 - 구조체 배열 동적 할당"
         << "|" << endl;
    drawLine();
    cout << endl;
}

void ReadAllRecords(string titles[], string authors[], int prices[], int dates[])
{
    for (int i = 0; i < 2; i++)
    {
        cout << "책 제목 입력 ->";
        cin >> titles[i];

        cout << "저자 이름 입력 ->";
        cin >> authors[i];

        cout << "가격 입력 ->";
        cin >> prices[i];

        cout << "출판일 입력(년월일: 20190103)->";
        cin >> dates[i];
    }
}

void DisplayAllRecords(string titles[], string authors[], int prices[], int dates[])
{
    cout << titles[0];
    for (int i = 0; i < 2; i++)
    {
        DisplayARecord(titles[i], authors[i], prices[i], dates[i]);
    }
}

void ReadAllRecordsFrFile(string titles[], string authors[], int prices[], int dates[], int &num)
{
    ifstream InputStream;

    InputStream.open("data.txt");

    int howMany = 0;
    InputStream >> howMany;
    num = howMany;

    int count = 0;

    while (!InputStream.eof())
    {
        InputStream >> titles[count] >> authors[count] >> prices[count] >> dates[count];
        count++;
    }
}

void Average(int prices[], int dates[], int num)
{
    int sum = 0;

    cout << num << endl;
    for (int i = 0; i < num; i++)
    {
        if (dates[i] > 19800101 || dates[i] < 20101231)
        {
            sum += prices[i];
        }
    }
    cout << sum / num;
};

void ReadAllRecords(Book bookList[])
{
    for (int i = 0; i < 2; i++)
    {
        ReadARecord(&bookList[i].title, &bookList[i].author, &bookList[i].price, &bookList[i].date);
    }
}

void DisplayAllRecords(Book bookList[])
{
    for (int i = 0; i < 2; i++)
    {
        DisplayARecord(bookList[i].title, bookList[i].author, bookList[i].price, bookList[i].date);
    }
}

Book *ReadAllRecordsFrFile(int *num)
{
    ifstream InputStream;

    InputStream.open("data.txt");

    Book newBookList[100];

    Book *ptr = newBookList;

    int numFromFile;

    InputStream >> numFromFile;

    *num = numFromFile;

    for (int i = 0; i < *num; i++)
    {
        InputStream >> newBookList[i].title >> newBookList[i].author >> newBookList[i].price >> newBookList[i].date;
    }

    cout << ptr[0].title << endl;

    return ptr;
};

int main()
{
    bool flag = true;

    while (flag)
    {
        printTitle();
        int key;
        cout << "Select a Function ->";
        cin >> key;
        if (key == 0)
        {
            flag = false;
        }
        else if (key == 1)
        {
            ReadARecord(&title, &author, &price, &date);
            DisplayARecord(title, author, price, date);
        }
        else if (key == 2)
        {
            ReadAllRecords(titles, authors, prices, dates);
            DisplayAllRecords(titles, authors, prices, dates);
        }
        else if (key == 3)
        {
            ReadAllRecordsFrFile(titles, authors, prices, dates, num);
            Average(prices, dates, num);
        }
        else if (key == 4)
        {
            Book bookList[100];
            ReadAllRecords(bookList);
            DisplayAllRecords(bookList);
        }
        else if (key == 5)
        {
            ReadAllRecordsFrFile(&num);
        }
    }
}