#include <iostream>
#include <fstream>
using namespace std;
#define MAX 100

string title[MAX];
string author[MAX];
int price[MAX];
int date[MAX];
int num = 0;

struct Book
{
    string title;
    string author;
    int price;
    int date;
};

void printData(string title[],
               string author[],
               int price[],
               int date[], int index)
{

    cout << index << " 번째 책 정보 " << endl;
    cout << "제목 : " << title[index] << endl;
    cout << "저자 이름 : " << author[index] << endl;
    cout << "가격 : " << price[index] << endl;
    cout << "출판일 : " << date[index] << endl;
    cout << endl;
};

void ReadAllRecordsFrFile(string title[],
                          string author[],
                          int price[],
                          int date[], int &num)
{
    ifstream InputStream;

    InputStream.open("data.txt");

    InputStream >> num;
    cout << num;

    for (int i = 0; i < num; i++)
    {
        InputStream >> title[i] >> author[i] >> price[i] >> date[i];
        printData(title, author, price, date, i);
    }
};

void Average(string title[],
             string author[],
             int price[],
             int date[], int &num)
{
    int start;
    int end;
    cout << "검색할 기간(시작일과 종료일)을 입력 ->";
    cin >> start >> end;

    int totalPrice = 0;
    for (int i = 0; i < num; i++)
    {
        if (date[i] > start && date[i] < end)
        {
            totalPrice += price[i];
            printData(title, author, price, date, i);
        }
    }

    int averagePrice = totalPrice / num;
    cout << "평균가격: " << averagePrice << endl;
};

Book *ReadAllRecordsFrFile(int *num)
{
    ifstream InputStream;

    int count = 0;
    InputStream.open("data.txt");
    InputStream >> count;
    cout << count << endl;
    *num = count;

    Book *newBookList = new Book[*num];

    if (!InputStream)
    {
        cerr << "Error: file(" << filename << ") open failed \n";
        exit(100);
    }

    for (int i = 0; i < *num; i++)
    {
        InputStream >> newBookList[i].title >> newBookList[i].author >> newBookList[i].price >> newBookList[i].date;
    }
    InputStream.close();

    return newBookList;
}

int main()
{
    // ReadAllRecordsFrFile(title, author, price, date, num);
    // Average(title, author, price, date, num);

    ReadAllRecordsFrFile(&num);
}