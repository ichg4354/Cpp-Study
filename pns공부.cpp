// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // void tree(int n)
// // {
// //     int count = 0;
// //     int middle = n / 2;
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int a = n - count; a > 0; a--)
// //         {
// //             cout << " ";
// //         }
// //         for (int a = 0; a < (1 + 2 * count); a++)
// //         {
// //             cout << "*";
// //         };
// //         count++;
// //         cout << "\n";
// //     }
// // }

// // // ###*###
// // // ##*#*##
// // // #*###*#
// // // *#####*
// // // #*###*#
// // // ##*#*##
// // // ###*###

// // int main()
// // {
// //     tree(5);
// // }

// #include <iostream>
// using namespace std;

// // void printAllPrimes(int n)
// // {
// //     for (int i = 2; i <= n; i++)
// //     {
// //         int prime = false;
// //         for (int a = 2; a < i; a++)
// //         {
// //             if (i % a == 0)
// //             {
// //                 break;
// //             }
// //             else
// //             {
// //                 prime = true;
// //                 break;
// //             }
// //         }
// //         if (prime)
// //         {
// //             cout << i << "  ";
// //         }
// //     }
// // }

// // void printAllPrimes(int n)
// // {
// //     for (int i = 2; i <= n; i++)
// //     {
// //         int prime = false;
// //         for (int a = 2; a < i; a++)
// //         {
// //             if (i % a == 0)
// //             {
// //                 break;
// //             }
// //             else
// //             {
// //                 prime = true;
// //             }
// //         }
// //         // if (i == 2)
// //         // {
// //         //     cout << 2 << "  ";
// //         // }
// //         if (prime)
// //         {
// //             cout << i << "  ";
// //         }
// //     }
// // }

// // void printAllPrimes(int n)
// // {
// //     for (int i = 2; i <= n; i++)
// //     {
// //         int prime = true;
// //         for (int b = 2; b < i; b++)
// //         {
// //             prime = (i % b != 0);
// //         }
// //         if (prime)
// //         {
// //             cout << i << " ";
// //         }
// //     }
// // }

// // int gcp(int a, int b)
// // {
// //     int min = (a < b ? a : b);
// //     int max = (a < b ? b : a);
// //     int gcp;

// //     for (int i = 1; i <= min; i++)
// //     {
// //         if ((max % i) == 0)
// //         {
// //             gcp = i;
// //         }
// //     }
// //     cout << gcp << endl;
// // }

// // void tree(int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int a = 0; a < (5 - i); a++)
// //         {
// //             cout << " ";
// //         }
// //         for (int b = 0; b < (2 * i + 1); b++)
// //         {
// //             cout << "*";
// //         }
// //         cout << '\n';
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int a = 0; a < i + 1; a++)
// //         {
// //             cout << " ";
// //         }
// //         for (int b = 1; b <= 2 * (4 - i) + 1; b++)
// //         {
// //             cout << "*";
// //         }
// //         cout << "\n";
// //     }
// // }

// int While = 5;
// int main()
// {
//     cout << '\a';
// }

// #include <iostream>
// using namespace std;

// void printMinMax()
// {
//     int numbers[] = {};

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> numbers[i];
//     }
//     int min = numbers[0];
//     int max = numbers[0];
//     for (int i = 1; i < 5; i++)
//     {
//         if (numbers[i] > max)
//         {
//             max = numbers[i];
//         }
//         if (numbers[i] < min)
//         {
//             min = numbers[i];
//         }
//     }
//     cout << max << ',' << min << endl;

//     // int max = numbers[0];
//     // int min = numbers[0];
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << numbers[0];
//     // }
// }

// int main()
// {
//     printMinMax();
// }

// #include <iostream>
// using namespace std;

// void tree(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int a = 0; a < n - i; a++)
//         {
//             cout << " ";
//         }
//         for (int b = 0; b < i + 1; b++)
//         {
//             cout << "*";
//         }
//         cout << '\n';
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int a = 0; a < i + 2; a++)
//         {
//             cout << " ";
//         }
//         for (int b = 0; b < n - i - 1; b++)
//         {
//             cout << "*";
//         }
//         cout << '\n';
//     }
// }

// int main()
// {
//     tree(7);
// }

// #include <iostream>
// using namespace std;

// double factorial(int n)
// {
//     double result = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         result *= i;
//     }
//     return result;
// }

// int main()
// {
//     int count = 0;
//     bool end = false;
//     double value = 1;
//     double prev = 1;

//     for (int i = 1; i < 10; i++)
//     {
//         value += 1 / factorial(i);
//         count++;
//         if ((value - prev) < 0.00001)
//         {
//             end = true;
//             break;
//         }
//         prev = value;
//     }
//     cout << "count : " << count << endl;
// }

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << exp(100);
}