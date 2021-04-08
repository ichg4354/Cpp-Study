// #include <iostream>

// int main()
// {
//     int input = 0, sum = 0;

//     std::cout << "Enter numbers to sum, negative number ends list:";

//     while (input >= 0)
//     {
//         std::cin >> input;
//         if (input > 1)
//         {
//             sum += input;
//         }
//     }
//     std::cout << "Sum = " << sum << '\n';
// }

// #include <iostream>
// int main()
// {
//     for (int i = 2; i <= 16; i = i + 2)
//     {
//         std::cout << i << '\n';
//     }
// };

// #include <iostream>

// int main()
// {
//     // int a = 0;
//     // while (a < 100)
//     // {

//     //     std::cout << a++;
//     // }

//     // std::cout << '\n';
//     int a = 0;
//     while (a < 100)
//     {
//         int b = 0;
//         while (b < 55)
//         {
//             std::cout << "*";
//             b++;
//         }
//         std::cout << '\n';
//     }
// }

// #include <iostream>

// int main()
// {
//     int n = 0, m = 100;
//     while (n != m)
//     {
//         std::cin >> n;
//         if (n < 0)
//         {
//             break;
//         }
//         std::cout << "n = " << n << '\n';
//     }
// }

// #include <iostream>

// int main()
// {
//     int x = 100, y;
//     while (x > 0)
//     {
//         std::cin >> y;
//         if (y == 25)
//         {
//             x--;
//             continue;
//         }
//         std::cin >> x;
//     }
//     std::cout << "x = " << x << '\n';
// }

// #include <iostream>
// using namespace std;

// const int LENGTH = 20;
// double list[LENGTH] = {};
// int main()
// {
//     double sum = 0;
//     double mean = 0;

//     cout << "Enter Number";
//     cin >> list[0];

//     double max = list[0];
//     double min = list[0];

//     sum += list[0];

//     for (int i = 1; i < LENGTH; i++)
//     {
//         cout << "Enter Number";
//         cin >> list[i];

//         sum = sum + list[i];

//         if (list[i] > max)
//         {
//             max = list[i];
//         }
//         if (list[i] < min)
//         {
//             min = list[i];
//         }
//     };

//     cout << "SUM " << sum << endl;
//     cout << "MEAN " << sum / LENGTH << endl;
//     cout << "MIN " << min << endl;
//     cout << "MAX " << max << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 7; i <= 67; i = i + 2)
//     {
//         cout << i;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int sum = 0;
//     int value = 15;
//     while (value >= 1 && value <= 15)
//     {
//         cout << "NUMBER: ";
//         cin >> value;

//         if (value >= 1 && value <= 15)
//             sum += value;
//     };
//     cout << sum;
// }

#include <iostream>
using namespace std;

int main()
{
    int number = 1;
    for (int i = 0; i < 50; i++)
    {
        cout << number;
        number += 3;
        count++;
    }
}