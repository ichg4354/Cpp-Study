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

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number = 1;
//     for (int i = 0; i < 50; i++)
//     {
//         cout << number;
//         number += 3;
//         count++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number = 1;
//     for (int i = 0; i < 50; i++)
//     {
//         cout << number;
//         number += 3;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     string number;

//     cin >> number;
//     int size = number.length();

//     for (int i = size; i >= 0; i--)
//     {
//         cout << number[i];
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int height;
//     cin >> height;
//     int count = 1;

//     while (height >= (count * 2) - 1)
//     {
//         if (count < height)
//         {
//             for (int i = 1; i < height; i++)
//             {
//                 cout << ' ';
//                 count++;
//             }
//             cout << "*" << endl;
//             count++;
//         }
//         else if (count >= height)
//         {
//             for (int i = 1; i < height; i++)
//             {
//                 cout << ' ';
//                 count++;
//             }
//             cout << "*" << endl;
//             count++;
//         }
//     }
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     int row = 0;
//     int height;
//     cin >> height;
//     while (row < height)
//     {
//         int count = 0;

//         for (int i = height; i > row; i--)
//         {
//             cout << "#";
//         };

//         while (count < 2 * row + 1)
//         {
//             cout << "*";
//             count++;
//         }

//         cout << endl;
//         row++;
//     }
// }

// #####*
// ####***
// ###*****
// ##*******
// #*********

// ###*
// ##***
// #*****

// #include <iostream>
// using namespace std;

// int row = 0;
// int height = 0;

// int main()
// {
//     cin >> height;

//     while (row < height - 1)
//     {
//         int count = 0;
//         while (count < height - row - 1)
//         {
//             cout << " ";
//             count++;
//         };

//         count = 0;
//         while (count <= row)
//         {
//             cout << "*";
//             count++;
//         };
//         cout << endl;
//         row++;
//     };

//     row = 0;
//     while (row < height)
//     {
//         int count = 0;
//         while (count < row)
//         {
//             cout << " ";
//             count++;
//         };

//         count = 0;
//         while (count < height - row)
//         {
//             cout << "*";
//             count++;
//         };
//         cout << endl;
//         row++;
//     };
// }

//         7개
// ######*     1
// #####**     2
// ####***     3
// ###****     4
// ##*****     5
// #******     6

// *******     7
// #******     8
// ##*****     9
// ###****     10
// ####***     11
// #####**     12
// ######*     13

#include <iostream>
using namespace std;

long double value1 = 1;
long double value2;

bool checkBool = true;

float factorial(int n)
{
    float sum = 1;
    for (int i = n; i >= 1; i--)
    {
        sum *= i;
    };
    return sum;
}

int main()
{
    int count = 1;

    while (checkBool)
    {
        value2 = value1 + 1 / factorial(count);
        count++;

        if (value2 - value1 <= 0.000001)
        {
            checkBool = false;
            cout << value2 - value1 << endl;
            cout << count + 1;
        };

        value1 = value2;
    }
}
