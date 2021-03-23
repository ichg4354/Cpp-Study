#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float totalBeforeTax = 5000.00;
    float salesTax = totalBeforeTax * 10 / 100.00;

    cout << "\t\n"
         << showpoint
         << fixed
         << setprecision(2)
         << setw(30)
         << "Sales Before Tax: " << setw(15) << totalBeforeTax << endl;

    cout << "\t\n"
         << setw(30)
         << "Sales Tax: " << setw(15) << salesTax << endl;

    cout << "\t\n"
         << setw(30)
         << "Total Sales: " << setw(15) << totalBeforeTax + salesTax << endl;
}