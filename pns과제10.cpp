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

//학생 Stuct
struct Student
{
    string name;
    int mid;
    int fnl;
    int par;
    int hw;
};

//줄 그리는 함수
void drawLine()
{
    cout << '\t' << setw(WIDTH + 4) << setfill('=') << '=' << endl;
}

// 학생들 이름을 저장하고 랜덤 mid, fnl, par, hw 값을 지정하는 함수
void GetClassInfo(int num, Student *StudentList)
{
    for (int i = 0; i < num; i++)
    {
        cout << i << "번째 학생의 이름을 입력하시오->";
        cin >> (StudentList + i)->name;
        (StudentList + i)->mid = rand() % 100;
        (StudentList + i)->fnl = rand() % 100;
        (StudentList + i)->par = rand() % 100;
        (StudentList + i)->hw = rand() % 100;
    }
}

// 학생 정보를 보여주는 함수
void DisplayStudentInfo(int num, string name, int mid, int fnl, int par, int hw)
{
    cout << num << ": " << name << "  " << mid << "  " << fnl << "  " << par << "  " << hw << "  " << endl;
}

// 학생들 정보를 가져와 DisplayStudentInfo 함수에 전달하는 함수
void DisplayClassInfo(int num, Student *StudentList)
{
    cout << num << endl;
    for (int i = 0; i < num; i++)
    {
        DisplayStudentInfo(i, (StudentList + i)->name, (StudentList + i)->mid, (StudentList + i)->fnl, (StudentList + i)->par, (StudentList + i)->hw);
    }
}

// 모든 학생 정보를 출력하는 함수
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

// 오버라이딩 해서 avrg grade를 모두 받을 수 있는 함수
void DisplayClassInfo(int num, Student *StudentList, double avrg[], char grade[])
{
    for (int i = 0; i < num; i++)
    {
        DisplayStudentInfo(i, (StudentList + i)->name, (StudentList + i)->mid, (StudentList + i)->fnl, avrg[i], (StudentList + i)->par, (StudentList + i)->hw, grade[i]);
    }
}

// 학생의 평균 점수를 계산한 후 avrg[]에 저장하는 함수
void Average(int num, double average[], Student *StudentList)
{
    for (int i = 0; i < num; i++)
    {
        average[i] = ((StudentList + i)->mid + (StudentList + i)->fnl) / 2.0;
    }
}

// 모든 실행할 수 있는 프로그램 보여주는 함수
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
    cout << "\t| " << left << setfill(' ') << setw(WIDTH + 10) << "11. 낙제 학생 몇명인지 찾기"
         << " |";
    cout << endl;
    drawLine();

    cout << '\t' << " Select a Function -->";
    cin >> inputR;

    return inputR;
}

// 학생 학점을 계산하는 함수
void CalculateGrade(int num, char grade[], Student *StudentList)
{
    int weightedSum = 0;
    for (int i = 0; i < num; i++)
    {
        weightedSum += (StudentList + i)->par * weights[0];
        weightedSum += (StudentList + i)->hw * weights[1];
        weightedSum += (StudentList + i)->mid * weights[2];
        weightedSum += (StudentList + i)->fnl * weights[3];

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
            grade[i] = 'E';
        }
        else
        {
            grade[i] = 'F';
        }
    }
}

int SMALLWIDTH = 10;

// 줄을 그리는 함수
void DrawLine()
{
    cout << "\t"
         << "*" << setw(SMALLWIDTH * 8 - 4) << setfill('-') << "-"
         << "*" << endl;
}

// title[]내부에 있는 title 각각 출력하는 함수
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

// 오버라이딩 해 학생 average grade 모두 출력할 수 있는 함수
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
// 오버라이딩 해 DisplayStudentInfo에 avrg grade까지 전달할 수 있는 함수
void DisplayClassInfo(int num, double flag, Student *StudentList, double avrg[], char grade[])
{
    DisplayTitle(title);
    for (int i = 0; i < num; i++)
    {
        DisplayStudentInfo(flag, i, (StudentList + i)->name, (StudentList + i)->mid, (StudentList + i)->fnl, avrg[i], (StudentList + i)->par, (StudentList + i)->hw, grade[i]);
    }
    DrawLine();
}

// 학생의 정보를 출력하는 함수
bool writeStudentScore(ofstream &outputStream, string name, int mid, int fnl, int par, int hw)
{
    outputStream << name << " " << par << " " << hw << " " << mid << " " << fnl << endl;
    cout << name << " " << par << " " << hw << " " << mid << " " << fnl << endl;
}

// 학생의 정보를 외부 파일로 전달하는 함수.
void fileWrite(int num, double rate[], int maxScore[], Student *StudentList)
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
        writeStudentScore(outputStream, (StudentList + i)->name, (StudentList + i)->mid, (StudentList + i)->fnl, (StudentList + i)->par, (StudentList + i)->hw);
    }

    outputStream.close();
}
// 학생의 정보를 외부에서 가져와 출력하는 함수
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
// 학생 정보를 외부에서 읽어들이는 함수
bool fileRead(double rate[], int maxScore[], Student *StudentList)
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
// 학생 이름에 맞는 학생 인덱스를 리턴하는 함수
int getIndexByName(int num, Student studentList[], string searchKey)
{
    for (int i = 0; i < num; i++)
    {
        if ((studentList + i)->name == searchKey)
        {
            return i;
        }
    }
    return -1;
}
// 학생 인덱스를 사용해, 학생 정보를 출력하는 함수
void SearchNDisplay(Student *StudentList)
{
    string nameKey;
    cout << "\n\t검색할 학생의 이름을 입력하시오 ->" << endl;
    cin >> nameKey;

    int studentIndex = getIndexByName(5, StudentList, nameKey);

    if (studentIndex >= 0)
    {
        DisplayTitle(title);
        DisplayStudentInfo(1.0, studentIndex, (StudentList + studentIndex)->name, (StudentList + studentIndex)->mid, (StudentList + studentIndex)->fnl, avrg[studentIndex], (StudentList + studentIndex)->par, (StudentList + studentIndex)->hw, grade[studentIndex]);
        DrawLine();
    }
    else
    {
        cout << "존재하지 않는 학생입니다." << endl;
    }
}
// 학생을 추가하는 함수
void AddStudent(int &num, Student *StudentList)
{
    if (num > MAX_SIZE - 1)
    {
        cout << "\t 추가할 공간이 없음." << endl;
    }
    else
    {
        cout << num << "번째 학생의 이름을 입력하시오->";
        cin >> (StudentList + num)->name;
        (StudentList + num)->mid = rand() % 100;
        (StudentList + num)->fnl = rand() % 100;
        (StudentList + num)->par = rand() % 100;
        (StudentList + num)->hw = rand() % 100;
        num++;
        cout << num;
    }
};
// 학생을 없애는 함수
void RemoveStudent(int &num, Student *StudentList)
{
    string delStudentName;
    cout << "지우고자 하는 학생의 이름을 입력하시오 ->";
    cin >> delStudentName;
    int index = getIndexByName(num, StudentList, delStudentName);
    for (int i = index; i < num; i++)
    {
        *(StudentList + i) = *(StudentList + i + 1);
    }
    num--;
};
// 낙제한 학생 수를 출력하는 함수
void findFailedStudentCount(char grade[])
{
    // 낙제한 학생 수 기록하는 변수
    int count = 0;
    // for문을 돌아 F, E, D학점을 맞은 학생들을 찾고 count에 1을 추가해줌
    for (int i = 0; i < 5; i++)
    {
        if (grade[i] == 'F' || grade[i] == 'E' || grade[i] == 'D')
        {
            count++;
        }
    }
    // 낙제한 학생 수 출력
    cout << "낙제한 학생은 " << count << " 명 입니다" << endl;
};

int main()
{
    Student *StudentList = new Student[MAX_SIZE];
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
        else if (input == 11)
        {
            findFailedStudentCount(grade);
        }
    }
}