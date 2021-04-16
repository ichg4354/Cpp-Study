// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     int first, second;
//     cout << "첫 번째 피연산자를 입력하시요 -->";
//     cin >> first;
//     cout << "두 번째 피연산자를 입력하시요 -->";
//     cin >> second;

//     cout << "\t |" << setfill('-') << setw(33) << "|" << endl;
//     cout << setfill(' ') << "\t +" << setw(10) << first << "|" << setw(10) << second << "|" << setw(10) << first + second << "|  " << endl;

//     cout << "\t |" << setfill('-') << setw(33) << "|" << endl;
//     cout << setfill(' ') << "\t -" << setw(10) << first << "|" << setw(10) << second << "|" << setw(10) << first - second << "|  " << endl;

//     cout << "\t |" << setfill('-') << setw(33) << "|" << endl;
//     cout << setfill(' ') << "\t *" << setw(10) << first << "|" << setw(10) << second << "|" << setw(10) << first * second << "|  " << endl;

//     cout << "\t |" << setfill('-') << setw(33) << "|" << endl;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     cout << "\t |"
//          << setfill('*') << setw(15) << " "
//          << setfill(' ') << setw(15) << "프로젝트3"
//          << setfill(' ') << setw(4) << " "
//          << setfill('*') << setw(15) << '|';
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     cout << "\n|"
//          << setiosflags(ios::left)
//          << setw(30)
//          << "***************"

//          << setw(10)
//          << "프로그램 3"

//          << setiosflags(ios::right)
//          << setw(30)
//          << "***************|\n";
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// string topStar = "********************";
// float number = 30.1415;

// int main()
// {
//      int del = 20;
//      int width = del * 4;

//      //HEADER
//      cout << setiosflags(ios::left)
//           << setw(del * 1.5) << topStar
//           << number
//           << "의 출력"
//           << setiosflags(ios::right)
//           << setw(del * 2 + 5) << topStar
//           << endl;

//      //TOP
//      cout
//          << setiosflags(ios::right)
//          << setfill('=') << setw(width + 11) << " \n";

//      //FIRST
//      cout << "|"
//           << setw(del + 2) << setfill(' ') << "Precision |"
//           << setw(del + 2) << "default |"
//           << setw(del + 2) << "scientific |"
//           << setw(del + 2) << "fixed |"
//           << endl;
//      cout << setfill('-') << setw(width + 11) << " \n";

//      //SECOND
//      cout
//          << "|"
//          << setw(del + 2) << setfill(' ') << "3 |"
//          << setprecision(3)
//          //default
//          << setw(del) << setfill(' ') << number << " |"
//          //scientific
//          << scientific
//          << setw(del) << setfill(' ') << number << " |"
//          //fixed
//          << fixed
//          << setw(del) << setfill(' ') << number << " |"
//          << endl;
//      cout << setfill('-') << setw(width + 11) << " \n";

//      //THIRD
//      cout << "|"
//           << defaultfloat
//           << setw(del + 2) << setfill(' ') << "5 |"
//           << setprecision(5)
//           //default
//           << setw(del) << setfill(' ') << number << " |"
//           //scientific
//           << scientific
//           << setw(del) << setfill(' ') << number << " |"
//           << fixed
//           //fixed
//           << setw(del) << setfill(' ') << number << " |"
//           << endl;

//      //BOTTOM
//      cout << setiosflags(ios::right)
//           << setfill('=') << setw(del * 4 + 11) << " \n";
// }

#include <iostream>
using namespace std;

void exchange(int &a, int &b)
{
     int wait = a;
     a = b;
     b = wait;

}

int main()
{
     int one = 10;
     int two = 5;
     exchange(one, two);
     cout << "ONE: " << one << " TWO: " << two << endl;
}