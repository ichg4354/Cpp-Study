#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int WIDTH = 45;
int NUM_OF_COMMAND = 6;
string command[] = {"0. Quit", "1. 학생정보와 점수 입력", "2. 학생정보 화면 출력", "3. 성적계산", "4. 성적 포함 학생정보 화면 출력", "5. 성적 포함 학생정보 형식화된 출력"};
string title[] = {"순번", "이름", "출석", "과제", "중간", "기말", "평균", "학점"};
int MAX_SIZE = 10;
string name[10];
char grade[10];
double avrg[10];
int maxScores[] = {20, 100, 100, 100};
double weights[] = {0.05, 0.3, 0.3, 0.35};

struct Student
{
    string name;
    int mid;
    int fnl;
    int par;
    int hw;
};

void drawLine()
{
    cout << '\t' << setw(WIDTH + 4) << setfill('=') << '=' << endl;
}

void GetClassInfo(int num, Student StudentList[])
{
    for (int i = 0; i < num; i++)
    {
        cout << i << "번째 학생의 이름을 입력하시오->";
        cin >> StudentList[i].name;
        StudentList[i].mid = rand() % 100;
        StudentList[i].fnl = rand() % 100;
        StudentList[i].par = rand() % 100;
        StudentList[i].hw = rand() % 100;
    }
}

void DisplayStudentInfo(int num, string name, int mid, int fnl, int par, int hw)
{
    cout << num << ": " << name << "  " << mid << "  " << fnl << "  " << par << "  " << hw << "  " << endl;
}
void DisplayClassInfo(int num, Student StudentList[])
{
    cout << num << endl;
    for (int i = 0; i < num; i++)
    {
        DisplayStudentInfo(i, StudentList[i].name, StudentList[i].mid, StudentList[i].fnl, StudentList[i].par, StudentList[i].hw);
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

void DisplayClassInfo(int num, Student StudentList[], double avrg[], char grade[])
{
    for (int i = 0; i < num; i++)
    {
        DisplayStudentInfo(i, StudentList[i].name, StudentList[i].mid, StudentList[i].fnl, avrg[i], StudentList[i].par, StudentList[i].hw, grade[i]);
    }
}
void Average(int num, double average[], Student StudentList[])
{
    for (int i = 0; i < num; i++)
    {
        average[i] = (StudentList[i].mid + StudentList[i].fnl) / 2.0;
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
    cout << "\t| " << left << setfill(' ') << setw(WIDTH + 15) << "5. 성적 포함 학생정보 형식화된 입력"
         << "|\n";
    cout << "\t| " << left << setfill(' ') << setw(WIDTH + 15) << "6. 성적 포함 학생정보 형식화된 출력"
         << "|\n";
    cout << "\t| " << left << setfill(' ') << setw(WIDTH + 14) << "7. 처리된 성적 테이블로 파일 출력"
         << "|\n";
    cout << "\t| " << left << setfill(' ') << setw(WIDTH + 12) << "8. 학생 이름 입력받아 정보 출력"
         << " |";
    cout << endl;
    cout << "\t| " << left << setfill(' ') << setw(WIDTH + 6) << "9. 학생 추가하기"
         << " |";
    cout << endl;
    cout << "\t| " << left << setfill(' ') << setw(WIDTH + 5) << "10. 학생 지우기"
         << " |";
    cout << endl;
    drawLine();

    cout << '\t' << " Select a Function -->";
    cin >> inputR;

    return inputR;
}

void CalculateGrade(int num, char grade[], Student StudentList[])
{
    int weightedSum = 0;
    for (int i = 0; i < num; i++)
    {
        weightedSum += StudentList[i].par * weights[0];
        weightedSum += StudentList[i].hw * weights[1];
        weightedSum += StudentList[i].mid * weights[2];
        weightedSum += StudentList[i].fnl * weights[3];

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

void DisplayClassInfo(int num, double flag, Student StudentList[], double avrg[], char grade[])
{
    DisplayTitle(title);
    for (int i = 0; i < num; i++)
    {
        DisplayStudentInfo(flag, i, StudentList[i].name, StudentList[i].mid, StudentList[i].fnl, avrg[i], StudentList[i].par, StudentList[i].hw, grade[i]);
    }
    DrawLine();
}

bool writeStudentScore(ofstream &inputStream, string name, int mid, int fnl, int par, int hw)
{
    inputStream << name << " " << par << " " << hw << " " << mid << " " << fnl << endl;
    cout << name << " " << par << " " << hw << " " << mid << " " << fnl << endl;
}

void fileWrite(int num, double rate[], int maxScore[], Student StudentList[])
{
    string title;
    cout << "학생정보를 저장할 파일이름을 입력 ->";
    cin >> title;

    ofstream outputStream;

    outputStream.open(title);
    outputStream << maxScore[0] << " " << maxScore[1] << " " << maxScore[2] << " " << maxScore[3] << endl;
    outputStream << rate[0] << " " << rate[1] << " " << rate[2] << " " << rate[3] << endl;

    for (int i = 0; i < num; i++)
    {
        writeStudentScore(outputStream, StudentList[i].name, StudentList[i].mid, StudentList[i].fnl, StudentList[i].par, StudentList[i].hw);
    }

    outputStream.close();
}

bool getScore(ifstream &inputStream, string &name, int &mid, int &fnl, int &par, int &hw)
{
    inputStream >> name >> mid >> fnl >> par >> hw;
    cout << name << " " << mid << " " << fnl << " " << par << " " << hw << endl;
    if (!inputStream)
        return false;
    else
    {
        return true;
    }
}

bool fileRead(double rate[], int maxScore[], Student StudentList[])
{
    string title;
    bool flag = true;
    int num = 0;
    cout << "학생정보를 읽어들일 파일이름을 입력 ->";
    cin >> title;

    ifstream inputStream;

    inputStream.open(title);

    inputStream >> maxScore[0] >> maxScore[1] >> maxScore[2] >> maxScore[3];
    cout << maxScore[0] << maxScore[1] << maxScore[2] << maxScore[3] << endl;
    inputStream >> rate[0] >> rate[1] >> rate[2] >> rate[3];
    cout << rate[0] << rate[1] << rate[2] << rate[3] << endl;

    while (flag)
    {
        flag = getScore(inputStream, StudentList[num].name, StudentList[num].mid, StudentList[num].fnl, StudentList[num].par, StudentList[num].hw);
        num++;
    }
}

int getIndexByName(int num, Student studentList[], string searchKey)
{
    for (int i = 0; i < num; i++)
    {
        if (studentList[i].name == searchKey)
        {
            return i;
        }
    }
    return -1;
}

void SearchNDisplay(Student StudentList[])
{
    string nameKey;
    cout << "\n\t검색할 학생의 이름을 입력하시오 ->" << endl;
    cin >> nameKey;

    int studentIndex = getIndexByName(5, StudentList, nameKey);

    if (studentIndex >= 0)
    {
        DisplayTitle(title);
        DisplayStudentInfo(1.0, studentIndex, StudentList[studentIndex].name, StudentList[studentIndex].mid, StudentList[studentIndex].fnl, avrg[studentIndex], StudentList[studentIndex].par, StudentList[studentIndex].hw, grade[studentIndex]);
        DrawLine();
    }
    else
    {
        cout << "존재하지 않는 학생입니다." << endl;
    }
}

void AddStudent(int &num, Student StudentList[])
{
    if (num > MAX_SIZE - 1)
    {
        cout << "\t 추가할 공간이 없음." << endl;
    }
    else
    {
        cout << num << "번째 학생의 이름을 입력하시오->";
        cin >> StudentList[num].name;
        StudentList[num].mid = rand() % 100;
        StudentList[num].fnl = rand() % 100;
        StudentList[num].par = rand() % 100;
        StudentList[num].hw = rand() % 100;
        num++;
        cout << num;
    }
};

void RemoveStudent(int &num, Student StudentList[])
{
    string delStudentName;
    cout << "지우고자 하는 학생의 이름을 입력하시오 ->";
    cin >> delStudentName;
    int index = getIndexByName(num, StudentList, delStudentName);
    for (int i = index; i < num; i++)
    {
        StudentList[i] = StudentList[i + 1];
    }
    num--;
};

int main()
{
    Student StudentList[MAX_SIZE];
    srand(time(NULL));
    int num = 5;
    while (1)
    {
        int input = getCommand();
        if (input == 0)
        {
            return 0;
        }
        else if (input == 1)
        {
            GetClassInfo(num, StudentList);
        }
        else if (input == 2)
        {
            DisplayClassInfo(num, StudentList);
        }
        else if (input == 3)
        {
            Average(num, avrg, StudentList);
            CalculateGrade(num, grade, StudentList);
        }
        else if (input == 4)
        {
            DisplayClassInfo(num, StudentList, avrg, grade);
        }
        else if (input == 5)
        {
            fileWrite(3, weights, maxScores, StudentList);
        }
        else if (input == 6)
        {
            fileRead(weights, maxScores, StudentList);
        }
        else if (input == 7)
        {
            DisplayClassInfo(num, 1.0, StudentList, avrg, grade);
        }
        else if (input == 8)
        {
            SearchNDisplay(StudentList);
        }
        else if (input == 9)
        {
            AddStudent(num, StudentList);
        }
        else if (input == 10)
        {
            RemoveStudent(num, StudentList);
        }
    }
}