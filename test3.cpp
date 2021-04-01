// #include <iostream>
// int main()
// {
//     // Some useful conversion constants
//     const int SECONDS_PER_MINUTE = 60,
//               SECONDS_PER_HOUR = 60 * SECONDS_PER_MINUTE;
//     int hours, minutes, seconds;
//     std::cout << "Please enter the number of seconds:";
//     std::cin >> seconds;
//     // First, compute the number of hours in the given number // of seconds
//     hours = seconds / SECONDS_PER_HOUR; // 3600 seconds = 1 hours // Compute the remaining seconds after the hours are // accounted for
//     seconds = seconds % SECONDS_PER_HOUR;
//     // Next, compute the number of minutes in the remaining
//     // number of seconds
//     minutes = seconds / SECONDS_PER_MINUTE; // 60 seconds = 1 minute // Compute the remaining seconds after the minutes are // accounted for
//     seconds = seconds % SECONDS_PER_MINUTE;
//     // Report the results
//     std::cout << hours;
//     // Decide between singular and plural form of hours
//     if (hours == 1)
//         std::cout << " hour ";
//     else
//         std::cout << " hours ";
//     std::cout << minutes;
//     // Decide between singular and plural form of minutes if (minutes == 1)
//     std::cout << " minute ";
//     else std::cout << " minutes ";
//     std::cout << seconds;
//     // Decide between singular and plural form of seconds if (seconds == 1)
//     std::cout << " second";
//     else std::cout << " seconds";
//     std::cout << '\n';
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int userNum;
//     cout << "Please enter a number -->: ";
//     cin >> userNum;

//     if (userNum >= 1 && userNum <= 100)
//     {
//         cout << "OK" << endl;
//     }
//     else
//     {
//         cout << "OUT OF RANGE" << endl;
//     }
// }

//

// #include <iostream>

// int main()
// {

//     int input;
//     std::cin >> input;
//     if (input < 10)
//     {
//         if (input != 5)
//             std::cout << "wow ";
//         else
//             input++;
//     }
//     else
//     {
//         if (input == 17)
//             input += 10;
//         else
//             std::cout << "whoa ";
//     }
//     std::cout << input << '\n';
// }

// #include <iostream>
// using namespace std;

// void c2(bool flag, int a, int b)
// {
//     if (flag)
//     {
//         cout << "SUM = " << a + b << endl;
//         cout << "AVERAGE = " << (a + b) / 2 << endl;
//     }
// }
// int main()
// {
//     c2(false, 5, 10);
// }

// #include <iostream>
// using namespace std;

// int gradePicker(int quiz, int mid, int final)
// {
//     int average = (quiz + mid + final) / 3;
//     char grade;
//     if (average >= 90)
//     {
//         grade = 'A';
//     }
//     else if (average >= 70)
//     {
//         grade = 'B';
//     }
//     else if (average >= 50)
//     {
//         grade = 'C';
//     }
//     else
//     {
//         grade = 'F';
//     }
//     return grade;
// }

// int main()
// {
//     char Student1Score;
//     Student1Score = gradePicker(80, 90, 100);
//     cout << Student1Score << endl;
// }

// #include <iostream>
// using namespace std;

// void oddOrEven(int a)
// {
//     string result;
//     if (a == 0)
//     {
//         cout << "0 WAS INSERTED" << endl;
//     }
//     else if (a % 2 == 0)
//     {
//         cout << "EVEN" << endl;
//     }
//     else
//     {
//         cout << "ODD" << endl;
//     }
// }

// int main()
// {
//     oddOrEven(0);
// }
// #include <iostream>
// using namespace std;
// void printMinMax(int a, int b, int c, int d, int e)
// {
//     int list[] = {a,
//                   b,
//                   c,
//                   d,
//                   e};

//     int Min = list[0];
//     int Max = list[0];

//     for (int i = 0; i < 5; i++)
//     {
//         if (list[i] > Max)
//         {
//             Max = list[i];
//         }
//         else
//         {
//             Min = list[i];
//         }
//     }
//     cout << "MIN: " << Min << endl;
//     cout << "Max: " << Max << endl;
// }

// int main()
// {
//     printMinMax(2, 5, 7, -5, -5);
// }

#include <iostream>
using namespace std;

struct Box
{
    int age;
    int height;
};

int main()
{
    Box Fuck(int a)
    {
        cout << "FUCK YOU" << a << "TIMES" << endl;
    }

    Fuck(3);
}