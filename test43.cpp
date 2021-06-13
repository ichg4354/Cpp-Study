#include <iostream>
#include <fstream>
using namespace std;
#define MAXSIZE 10

string name;
float price;
int quant;
int numOfItems;
int totalCount;
float totalPrice;

string nameA[MAXSIZE];
float priceA[MAXSIZE];
int quantA[MAXSIZE];

struct product
{
    string name;
    float price;
    int quant;
};

void printData(string name, float price, int quant)
{
    cout << "상 품 명 : " << name << endl;
    cout << "가   격 : " << price << endl;
    cout << "수   량 : " << quant << endl;
}

void inputData(string &name, float &price, int &quant)
{

    cout << "[ 상품정보 입력 ]" << endl;

    cout << "상 품 명 ->";
    cin >> name;
    cout << "상품가격(실수) ->";
    cin >> price;
    cout << "상품수량(정수) ->";
    cin >> quant;

    printData(name, price, quant);
}

void GetData(string name)
{
    cout << "상 품 명 ->";
    cin >> name;
}
void GetData(float price)
{
    cout << "상품가격(실수) ->";
    cin >> price;
}
void GetData(int quant)
{
    cout << "상품수량(정수) ->";
    cin >> quant;
}

void DisplayData(string name, float price, int quant)
{
    cout << "상 품 명 : " << name << endl;
    cout << "가   격 : " << price << endl;
    cout << "수   량 : " << quant << endl;
}

int ReadDataFrFile(string nameA[], float priceA[], int quantA[])
{
    ifstream InputStream;
    string target;
    cout << "상품자료 파일 이름 ->";
    cin >> target;
    int count = 0;
    InputStream.open(target);

    InputStream >> count;

    if (!InputStream)
    {
        cout << target << "  를 여는데 에러가 남" << endl;
    }

    for (int i = 0; i < count; i++)
    {
        InputStream >> nameA[i] >> priceA[i] >> quantA[i];
        cout << "<< 상품" << i << " >>" << endl;
        DisplayData(nameA[i], priceA[i], quantA[i]);
    }

    return count;
}

void GetTotal(int numOfItems, float priceA[], int countA[], int &totalCount, float &totalPrice)
{
    for (int i = 0; i < numOfItems; i++)
    {
        totalCount += countA[i];
        totalPrice += priceA[i] * countA[i];
    };

    cout << "상품의 총 수 : " << totalCount << " "
         << "상품 가격의 합 : " << totalPrice << endl;
};

void RetrieveByPrice(int numOfItems, string nameA[], float priceA[], int quantA[])
{
    int least;
    int most;
    cout << "검색할 상품의 하한가와 상한가 -> ";
    cin >> least >> most;

    for (int i = 0; i < numOfItems; i++)
    {
        if (priceA[i] >= least && priceA[i] <= most)
        {
            DisplayData(nameA[i], priceA[i], quantA[i]);
        }
    }
};

void RetrieveByNameNPrice(int num, product list[])
{
    for (int i = 0; i < num; i++)
    {
        list[i].name = nameA[i];
        list[i].price = priceA[i];
        list[i].quant = quantA[i];
    }

    string inputName;
    int inputPrice;

    cout << "검색할 상품의 이름과 가격 -> ";
    cin >> inputName >> inputPrice;

    cout << num << endl;

    for (int i = 0; i < num; i++)
    {
        if (list[i].name == inputName && static_cast<int>(list[i].price) == inputPrice)
        {
            DisplayData(list[i].name, list[i].price, list[i].quant);
        }
    }
};

int main()
{
    cout << "*********"
         << "문제 1 : 상품정보 입력 및 출력 "
         << "*********" << endl;
    inputData(name, price, quant);

    cout << "*********"
         << "문제 2 : 함수 overloading을 이용한 "
         << "*********" << endl;
    GetData(name);
    GetData(price);
    GetData(quant);

    DisplayData(name, price, quant);

    cout << "*********"
         << "문제 3 : 배열 및 파일 입출력 "
         << "*********" << endl;

    numOfItems = ReadDataFrFile(nameA, priceA, quantA);

    cout << "*********"
         << "문제 4 : 보유 중인 총액 및 수량 계산 "
         << "*********" << endl;
    GetTotal(numOfItems, priceA, quantA, totalCount, totalPrice);

    cout << "*********"
         << "문제 5 : 가격으로 상품 검색 "
         << "*********" << endl;

    RetrieveByPrice(numOfItems, nameA, priceA, quantA);

    cout << "*********"
         << "문제 6 : 구조체 "
         << "*********" << endl;

    product prod[MAXSIZE];
    RetrieveByNameNPrice(numOfItems, prod);
};