#include <iostream>
using namespace std;

class Stock
{
private:
    string Name;
    int Price;
    int Amount;
    int Total;
    void getTotal() { Total = Price * Amount; }

public:
    void show()
    {
        cout << Name << " : " << Total << "원" << endl;
    }
    Stock pickHigher(Stock &stock)
    {
        if (stock.Total > Total)
        {
            return stock;
        }
        return *this;
    }
    Stock(string, int, int);
    ~Stock();
};

Stock::Stock(string name, int amount, int price)
{
    Price = price;
    Name = name;
    Amount = amount;
    getTotal();
}

Stock::~Stock()
{
}

int main()
{
    Stock s[4] = {
        Stock("Samsung", 50, 1000),
        Stock("Tesla", 100, 2300),
        Stock("df", 50, 1000),
        Stock("dfd", 100, 200)
    };
    Stock selected = s[0].pickHigher(s[1]);
    selected.show();
}