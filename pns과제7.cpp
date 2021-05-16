#include <iostream>
#include <iomanip>
using namespace std;
int WIDTH = 45;
int NUM_OF_COMMAND = 6;
string command[] = {"0. Quit", "1. 학생정보와 점수 입력", "2. 학생정보 화면 출력", "3. 성적계산", "4. 성적 포함 학생정보 화면 출력", "5. 성적 포함 학생정보 형식화된 출력"};
string title[] = {"순번", "이름", "출석", "과제", "중간", "기말", "평균", "학점"};

string name[10];
int fnl[10], mid[10];
int par[10], hw[10];
char grade[10];
double avrg[10];

void drawLine()
{
     cout << '\t' << setw(WIDTH + 4) << setfill('=') << '=' << endl;
}

void GetClassInfo(int num, string name[], int mid[], int fnl[])
{
     for (int i = 0; i < num; i++)
     {
          cout << i << "번째 학생의 이름을 입력하시오->";
          cin >> name[i];
          mid[i] = rand() % 100;
          fnl[i] = rand() % 100;
          par[i] = rand() % 100;
          hw[i] = rand() % 100;
     }
}
void DisplayStudentInfo(int num, string name, int mid, int fnl, int par, int hw)
{
     cout << num << ": " << name << "  " << mid << "  " << fnl << "  " << par << "  " << hw << "  " << endl;
}
void DisplayClassInfo(int num, string name[], int mid[], int fnl[], int par[], int hw[])
{
     for (int i = 0; i < num; i++)
     {
          DisplayStudentInfo(i, name[i], mid[i], fnl[i], par[i], hw[i]);
     }
}
void DisplayStudentInfo(int num, string name, int mid, int fnl, double avrg, int par, int hw, char grade)
{
     cout << num << ": "
          << name << "  "
          << par << "  "
          << hw << "  "
          << mid << "  "
          << fnl << "  "
          << avrg << "  "
          << grade << "  "
          << endl;
}

void DisplayClassInfo(int num, string name[], int mid[], int fnl[], double avrg[], int par[], int hw[], char grade[])
{
     for (int i = 0; i < num; i++)
     {
          DisplayStudentInfo(i, name[i], mid[i], fnl[i], avrg[i], par[i], hw[i], grade[i]);
     }
}
void Average(int num, string name[], int mid[], int fnl[], double avrg[])
{
     for (int i = 0; i < num; i++)
     {
          avrg[i] = (mid[i] + fnl[i]) / 2.0;
     }
}
int getCommand()
{
     int inputR;
     drawLine();
     cout << "\t| " << left << setfill(' ') << setw(WIDTH + 1) << "0. Quit"
          << "|\n";
     cout << "\t| " << left << setfill(' ') << setw(WIDTH + 10) << "1. 학생정보와 점수 입력"
          << "|\n";
     cout << "\t| " << left << setfill(' ') << setw(WIDTH + 9) << "2. 학생정보 화면 출력"
          << "|\n";
     cout << "\t| " << left << setfill(' ') << setw(WIDTH + 5) << "3. 성적계산"
          << "|\n";
     cout << "\t| " << left << setfill(' ') << setw(WIDTH + 13) << "4. 성적 포함 학생정보 화면 출력"
          << "|\n";
     cout << "\t| " << left << setfill(' ') << setw(WIDTH + 15) << "5. 성적 포함 학생정보 형식화된 출력"
          << "|\n";
     drawLine();

     cout << '\t' << " Select a Function -->";
     cin >> inputR;

     return inputR;
}

void CalculateGrade(int num)
{
     int weightedSum = 0;
     for (int i = 0; i < num; i++)
     {
          weightedSum += par[i] * 0.05;
          weightedSum += hw[i] * 0.35;
          weightedSum += mid[i] * 0.25;
          weightedSum += fnl[i] * 0.35;

          if (weightedSum > 90)
          {
               grade[i] = 'A';
          }
          else if (weightedSum > 80)
          {
               grade[i] = 'B';
          }
          else if (weightedSum > 70)
          {
               grade[i] = 'C';
          }
          else if (weightedSum > 60)
          {
               grade[i] = 'D';
          }
          else if (weightedSum > 50)
          {
               grade[i] = 'D';
          }
          else if (weightedSum > 40)
          {
               grade[i] = 'E';
          }
          else
          {
               grade[i] = 'F';
          }
     }
}

int SMALLWIDTH = 10;

void DrawLine()
{
     cout << "\t"
          << "*" << setw(SMALLWIDTH * 8 - 4) << setfill('-') << "-"
          << "*" << endl;
}
void DisplayTitle(string title[])
{
     DrawLine();
     cout << "\t|" << right << setfill(' ') << setw(SMALLWIDTH - 2) << title[0]
          << "| " << setw(SMALLWIDTH - 2) << title[1]
          << "| " << setw(SMALLWIDTH - 2) << title[2]
          << "| " << setw(SMALLWIDTH - 2) << title[3]
          << "| " << setw(SMALLWIDTH - 2) << title[4]
          << "| " << setw(SMALLWIDTH - 2) << title[5]
          << "| " << setw(SMALLWIDTH - 2) << title[6]
          << "| " << setw(SMALLWIDTH - 2) << title[7]
          << "| " << endl;
     DrawLine();
}
void DisplayStudentInfo(double flag, int num, string name, int mid, int fnl, double average, int par, int hw, char grade)
{
     cout << "\t|" << right << setfill(' ') << setw(SMALLWIDTH - 2) << num
          << "| " << setw(SMALLWIDTH - 2) << name
          << "| " << setw(SMALLWIDTH - 2) << par
          << "| " << setw(SMALLWIDTH - 2) << hw
          << "| " << setw(SMALLWIDTH - 2) << mid
          << "| " << setw(SMALLWIDTH - 2) << fnl
          << fixed << setprecision(2)
          << "| " << setw(SMALLWIDTH - 2) << average
          << "| " << setw(SMALLWIDTH - 2) << grade
          << "| "
          << endl;
}

void DisplayClassInfo(int num, string title[], string name[], int mid[], int fnl[], double avrg[], int par[], int hw[], char grade[])
{
     DisplayTitle(title);
     for (int i = 0; i < num; i++)
     {
          DisplayStudentInfo(1.0, i, name[i], mid[i], fnl[i], avrg[i], par[i], hw[i], grade[i]);
     }
     DrawLine();
}

int main()
{
     srand(time(NULL));
     while (1)
     {
          int input = getCommand();
          if (input == 0)
          {
               return 0;
          }
          else if (input == 1)
          {
               GetClassInfo(5, name, mid, fnl);
          }
          else if (input == 2)
          {
               DisplayClassInfo(5, name, mid, fnl, par, hw);
          }
          else if (input == 3)
          {
               Average(5, name, mid, fnl, avrg);
               CalculateGrade(5);
          }
          else if (input == 4)
          {
               DisplayClassInfo(5, name, mid, fnl, avrg, par, hw, grade);
          }
          else if (input == 5)
          {
               DisplayClassInfo(5, title, name, mid, fnl, avrg, par, hw, grade);
          }
     }
}