#include <iostream>
#include <fstream>
#define MAXSIZE 10

using namespace std;

string name;
float price;
int Count;
int numOfItems;

string nameA[MAXSIZE];
float priceA[MAXSIZE];
int countA[MAXSIZE];

struct Product
{
    string name;
    int count;
    float price;
};

void GetData(string &name)
{
    cout << "상 품 명 ->";
    cin >> name;
};
void GetData(float &price)
{
    cout << "상품가격(실수) ->";
    cin >> price;
};
void GetData(int &Count)
{
    cout << "상품수량(정수) ->";
    cin >> Count;
};

void DisplayData(string name, float price, int Count)
{
    cout << "상 품 명 : " << name << endl;
    cout << "가   격 : " << price << endl;
    cout << "수   량 : " << Count << endl;
};

int ReadDataFrFile(string nameA[], float priceA[], int countA[])
{
    ifstream InputStream;
    string inputPath;
    cout << "상품자료 파일 이름 ->";
    cin >> inputPath;
    InputStream.open(inputPath);

    if (!InputStream)
    {
        cout << "ERROR";
        return 0;
    }

    int num;
    InputStream >> num;

    for (int i = 0; i < num; i++)
    {
        InputStream >> nameA[i] >> priceA[i] >> countA[i];
    }
    return num;
};

void DisplayArrayData(int numOfItems, string nameA[], float priceA[], int countA[])
{
    for (int i = 0; i < numOfItems; i++)
    {
        cout << "<< 상품" << i << " >>" << endl;
        cout << "상 품 명 : " << nameA[i] << endl;
        cout << "가   격 : " << priceA[i] << endl;
        cout << "수   량 : " << countA[i] << endl;
        cout << endl;
    }
}

void GetTotal(int numOfItems, float priceA[], int countA[], int &totalCount, int &totalPrice)
{
    for (int i = 0; i < numOfItems; i++)
    {
        totalCount += countA[i];
        totalPrice += countA[i] * priceA[i];
    }
};

void RetrieveByPrice(int numOfItems, string nameA[], float priceA[], int countA[])
{
    int least;
    int most;
    cout << "검색할 제품의 하한가와 상한가 -> ";
    cin >> least >> most;

    for (int i = 0; i < numOfItems; i++)
    {
        if (priceA[i] >= least && priceA[i] <= most)
        {
            DisplayData(nameA[i], priceA[i], countA[i]);
        }
    }
};

void RetrieveByNameNPrice(int numOfItems, Product prod[])
{
    for (int i = 0; i < numOfItems; i++)
    {
        prod[i].name = nameA[i];
        prod[i].price = priceA[i];
        prod[i].count = countA[i];
    }
    string inputName;
    int inputPrice;

    cout << "검색할 상품의 이름과 가격 -->";
    cin >> inputName >> inputPrice;

    for (int i = 0; i < numOfItems; i++)
    {
        if (inputName == prod[i].name && inputPrice == static_cast<int>(prod[i].price))
        {
            DisplayData(prod[i].name, prod[i].price, prod[i].count);
        }
    }
};

int main()
{
    // cout << "문제 1 " << endl;

    // cout << "상 품 명 ->";
    // cin >> name;
    // cout << "상품가격(실수) ->";
    // cin >> price;
    // cout << "상품수량(정수) ->";
    // cin >> Count;
    // cout << "상 품 명 : " << name << endl;
    // cout << "가   격 : " << price << endl;
    // cout << "수   량 : " << Count << endl;

    // cout << "문제 2 " << endl;
    // GetData(name);
    // GetData(price);
    // GetData(Count);
    // DisplayData(name, price, Count);

    cout << "문제 3 " << endl;

    numOfItems = ReadDataFrFile(nameA, priceA, countA);
    DisplayArrayData(numOfItems, nameA, priceA, countA);

    // cout << "문제 4 " << endl;
    // int totalCount;
    // int totalPrice;
    // GetTotal(numOfItems, priceA, countA, totalCount, totalPrice);
    // cout << "상품의 총 수 : " << totalCount << " "
    //      << "상품 가격의 함 : " << totalPrice << endl;

    // cout << "문제 5 " << endl;
    // RetrieveByPrice(numOfItems, nameA, priceA, countA);

    cout << "문제 6 " << endl;
    Product prod[MAXSIZE];
    RetrieveByNameNPrice(numOfItems, prod);
}
