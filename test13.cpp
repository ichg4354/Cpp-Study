#include <iostream>
using namespace std;

class Stock
{
private:
    string Name;
    int Price;
    int Amount;
    int TotalValue;
    void getTotalValue() { TotalValue = Price * Amount; }

public:
    void createStock(string name, int price, int amount)
    {
        Name = name;
        Price = price;
        Amount = amount;
        getTotalValue();
    }
    void buyStock(int n)
    {
        Amount += n;
    }
    void sellStock(int n)
    {
        Amount -= n;
    }
    void showTotalValue()
    {
        cout << Name << " : " << TotalValue << "원" << endl;
    }
    Stock();
    Stock(string, int, int);
    ~Stock();
};

Stock::Stock(string name, int amount, int price)
{
    Name = name;
    Amount = amount;
    Price = price;
    getTotalValue();
}

Stock::Stock()
{
    Name = " ";
    Amount = 0;
    Price = 0;
    getTotalValue();
}

Stock::~Stock()
{
}

int main()
{
    Stock samsung = Stock("samsung", 10, 5000);
    samsung.showTotalValue();
    Stock bullShit;
    bullShit.showTotalValue();
}