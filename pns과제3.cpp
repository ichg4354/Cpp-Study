#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    const int WIDTH = 80;
    const int SECTION = WIDTH / 8;
    const int TAX = 10;

    string itemName1;
    int numOfItems1;
    int unitPrice1;
    int discountRate1;

    string itemName2;
    int numOfItems2;
    int unitPrice2;
    int discountRate2;

    cout << "Enter Item Name -->";
    cin >> itemName1;
    cout << "Enter Number of Items -->";
    cin >> numOfItems1;
    cout << "Enter the Unit Price -->";
    cin >> unitPrice1;
    cout << "Enter Discount Rate -->";
    cin >> discountRate1;

    cout << "Enter Item Name -->";
    cin >> itemName2;
    cout << "Enter Number of Items -->";
    cin >> numOfItems2;
    cout << "Enter the Unit Price -->";
    cin >> unitPrice2;
    cout << "Enter Discount Rate -->";
    cin >> discountRate2;

    cout << "\n\t"
         << "테이블에 결과 출력" << endl;
    cout << "\n";

    cout
        << setfill('*') << setw(45) << " 판매 기록 " << setw(39) << '*' << endl;
    cout << setfill('=') << setw(WIDTH) << "=" << endl;

    cout << '|' << setfill(' ')
         << setw(SECTION * 2 - 2) << "이름"
         << '|' << setw(SECTION) << "개수"
         << '|' << setw(SECTION) << "가격"
         << '|' << setw(SECTION) << "disR"
         << '|' << setw(SECTION) << "subTotal"
         << '|' << setw(SECTION) << "disAm"
         << '|' << setw(SECTION) << "disTotal"
         << '|' << endl;

    cout << setfill('=') << setw(WIDTH) << "=" << endl;

    int subTotal1 = unitPrice1 * numOfItems1;
    int disAm1 = unitPrice1 * discountRate1 / 100 * numOfItems1;
    int disTotal1 = subTotal1 - disAm1;

    cout
        << '|' << setfill(' ')
        << setw(SECTION * 2 - 1) << itemName1
        << '|' << setw(SECTION - 2) << numOfItems1
        << '|' << setw(SECTION - 2) << unitPrice1
        << '|' << setw(SECTION) << discountRate1
        << '|' << setw(SECTION) << subTotal1
        << '|' << setw(SECTION) << disAm1
        << '|' << setw(SECTION) << disTotal1
        << '|' << endl;

    cout << setfill('-') << setw(WIDTH) << "-" << endl;

    int subTotal2 = unitPrice2 * numOfItems2;
    int disAm2 = unitPrice2 * discountRate2 / 100 * numOfItems2;
    int disTotal2 = subTotal2 - disAm2;

    cout
        << '|' << setfill(' ')
        << setw(SECTION * 2 - 1) << itemName2
        << '|' << setw(SECTION - 2) << numOfItems2
        << '|' << setw(SECTION - 2) << unitPrice2
        << '|' << setw(SECTION) << discountRate2
        << '|' << setw(SECTION) << subTotal2
        << '|' << setw(SECTION) << disAm2
        << '|' << setw(SECTION) << disTotal2
        << '|' << endl;

    cout << setfill('=') << setw(WIDTH) << "=" << endl;

    float totalBeforeTax = disTotal1 + disTotal2;
    float salesTax = totalBeforeTax * TAX / 100.00;

    cout << "\t\n"
         << showpoint
         << fixed
         << setfill(' ')
         << setprecision(2)
         << setw(30)
         << "Sales Before Tax: " << setw(5) << totalBeforeTax << endl;

    cout << "\t\n"
         << setw(30)
         << "Sales Tax: " << setw(5) << salesTax << endl;

    cout << "\t\n"
         << setw(30)
         << "Total Sales: " << setw(5) << totalBeforeTax + salesTax << endl;
}