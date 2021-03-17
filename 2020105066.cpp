#include <iostream>
#include <iomanip>
using namespace std;

string topStar = "********************";
float number = 30.1415;

int main()
{
    int del = 20;
    int width = del * 4;

    //HEADER
    cout << setiosflags(ios::left)
         << setw(del * 1.5) << topStar
         << number
         << "의 출력"
         << setiosflags(ios::right)
         << setw(del * 2 + 5) << topStar
         << endl;

    //TOP
    cout
        << setiosflags(ios::right)
        << setfill('=') << setw(width + 11) << " \n";

    //FIRST
    cout << "|"
         << setw(del + 2) << setfill(' ') << "Precision |"
         << setw(del + 2) << setfill(' ') << "default |"
         << setw(del + 2) << setfill(' ') << "scientific |"
         << setw(del + 2) << setfill(' ') << "fixed |"
         << endl;
    cout << setfill('-') << setw(width + 11) << " \n";

    //SECOND
    cout
        << "|"
        << setw(del + 2) << setfill(' ') << "3 |"
        << setprecision(3)
        //default
        << setw(del) << setfill(' ') << number << " |"
        //scientific
        << scientific
        << setw(del) << setfill(' ') << number << " |"
        //fixed
        << fixed
        << setw(del) << setfill(' ') << number << " |"
        << endl;
    cout << setfill('-') << setw(width + 11) << " \n";

    //THIRD
    cout << "|"
         << defaultfloat
         << setw(del + 2) << setfill(' ') << "5 |"
         << setprecision(5)
         //default
         << setw(del) << setfill(' ') << number << " |"
         //scientific
         << scientific
         << setw(del) << setfill(' ') << number << " |"
         << fixed
         //fixed
         << setw(del) << setfill(' ') << number << " |"
         << endl;

    //BOTTOM
    cout << setiosflags(ios::right)
         << setfill('=') << setw(del * 4 + 11) << " \n";
}