#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
     int WIDTH = 20;

     string Name1;
     int Name1MidScore;
     int Name1FinScore;
     string Name2;
     int Name2MidScore;
     int Name2FinScore;

     cout << "Enter Name ->";
     cin >> Name1;
     cout << "Enter midterm Score ->";
     cin >> Name1MidScore;
     cout << "Enter final Score ->";
     cin >> Name1FinScore;

     cout << "Enter Name ->";
     cin >> Name2;
     cout << "Enter midterm Score ->";
     cin >> Name2MidScore;
     cout << "Enter final Score ->";
     cin >> Name2FinScore;

     cout << "\n\n\t"
          << setiosflags(ios::left)
          << setw(WIDTH * 4 * 2 / 5)
          << setfill('*')
          << '*'
          << setw(WIDTH * 4 * 1 / 5)
          << " 성 적 표 "
          << setiosflags(ios::right)
          << setw(WIDTH * 4 * 2 / 5)
          << setfill('*')
          << '*'
          << endl;

     cout << "\t"
          << setw(WIDTH * 4 - 3)
          << setfill('=')
          << '='
          << endl;

     cout << "\t|"
          << setw(WIDTH)
          << setfill(' ')
          << "이름"
          << " |"
          << setw(WIDTH)
          << setfill(' ')
          << "중간고사"
          << " |"
          << setw(WIDTH)
          << setfill(' ')
          << "기말고사"
          << " |"
          << setw(WIDTH)
          << setfill(' ')
          << "평균"
          << " |"
          << endl;

     cout << "\t"
          << setw(WIDTH * 4 - 3)
          << setfill('-')
          << '-'
          << endl;

     // Line 2

     cout << "\t|"
          << setw(WIDTH + 1)
          << setfill(' ')
          << Name1
          << " |"
          << setw(WIDTH - 4)
          << setfill(' ')
          << Name1MidScore
          << " |"
          << setw(WIDTH - 4)
          << setfill(' ')
          << Name1FinScore
          << " |"
          << setw(WIDTH - 2)
          << setfill(' ')
          << fixed
          << setprecision(1)
          << (Name1MidScore + Name1FinScore) / 2.0
          << " |"
          << endl;

     cout << "\t"
          << setw(WIDTH * 4 - 3)
          << setfill('-')
          << '-'
          << endl;

     //Line3
     cout << "\t|"
          << setw(WIDTH + 1)
          << setfill(' ')
          << Name2
          << " |"
          << setw(WIDTH - 4)
          << setfill(' ')
          << Name2MidScore
          << " |"
          << setw(WIDTH - 4)
          << setfill(' ')
          << Name2FinScore
          << " |"
          << setw(WIDTH - 2)
          << setfill(' ')
          << fixed
          << setprecision(1)
          << (Name2MidScore + Name2FinScore) / 2.0
          << " |"
          << endl;

     cout << "\t"
          << setw(WIDTH * 4 - 3)
          << setfill('-')
          << '-'
          << endl;

     cout << "\t"
          << "반 평균 = "
          << fixed
          << setprecision(2)
          << (Name1MidScore + Name2MidScore + Name1FinScore + Name2FinScore) / 4.0
          << endl;
}