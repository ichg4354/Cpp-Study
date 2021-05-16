#include <iostream>
using namespace std;

class Stock
{
private:
    string Name;
    int Price_of_stock;
    int Num_of_stock;
    int Total_amount;
    void getTotal() { Total_amount = Price_of_stock * Num_of_stock; }

public:
    void addNewStock(string, int, int);
    void buyStock(int);
    void sellStock(int);
    void showTotal();
    Stock(/* args */);
    ~Stock();
};
void Stock::addNewStock(string name, int price_of_stock, int num_of_stock)
{
    Name = name;
    Price_of_stock = price_of_stock;
    Num_of_stock = num_of_stock;
    getTotal();
    
}
void Stock::buyStock(int n)
{
    Num_of_stock += n;
    getTotal();
}

void Stock::sellStock(int n)
{
    Num_of_stock -= n;
    getTotal();
}

void Stock::showTotal()
{
    cout << Name << " : " << Total_amount << "원" << endl;
}

Stock::Stock(/* args */)
{
}

Stock::~Stock()
{
}

int main()
{
    Stock samsung;
    samsung.addNewStock("samsung", 5000, 10);
    samsung.showTotal();
}