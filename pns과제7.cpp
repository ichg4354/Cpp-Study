#include <iostream>
#include <iomanip>
using namespace std;
int WIDTH = 45;
int NUM_OF_COMMAND = 6;
string command[] = {"0. Quit", "1. 학생정보와 점수 입력", "2. 학생정보 화면 출력", "3. 성적계산", "4. 성적 포함 학생정보 화면 출력", "5. 성적 포함 학생정보 형식화된 출력"};

void drawLine()
{
    cout << '\t' << setw(WIDTH + 4) << setfill('=') << '=' << endl;
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
int main()
{
    while (1)
    {
        int input = getCommand();
        if (input == 0)
        {
            return 0;
        }
        else if (input == 1)
        {
        }
        else if (input == 2)
        {
        }
        else if (input == 3)
        {
        }
        else if (input == 4)
        {
        }
        else if (input == 5)
        {
        }
    }
}