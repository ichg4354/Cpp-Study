#include <iostream>
#include <fstream>
using namespace std;

int num;

struct Book
{
    string title;
    string author;
    int price;
    int date;
};

Book *ReadAllRecordsFrFile(int *num)
{
    ifstream InputStream;
    InputStream.open("data.txt");

    InputStream >> *num;

    Book *ptr = new Book[*num];

    cout << ptr << endl;

    // for (int i = 0; i < *num; i++)
    // {
    //     InputStream >> ptr[i].title >> ptr[i].author >> ptr[i].price >> ptr[i].date;
    //     cout << ptr[i].title << endl;
    // }
};

int main()
{
    ReadAllRecordsFrFile(&num);
}