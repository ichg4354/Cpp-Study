// #include <iostream>
// using namespace std;

// int sum1(int n)
// {
//     int s = 0;
//     while (n > 0)
//     {
//         s++;
//         n--;
//     }
//     return s;
// }

// int input;

// int sum2()
// {
//     int s = 0;
//     while (input > 0)
//     {
//         s++;
//         input--;
//     }
//     return s;
// }

// int sum3()
// {
//     int s = 0;
//     for (int i = input; i > 0; i--)
//     {
//         s++;
//     }
//     return s;
// }
// int main()
// {
//     input = 5;
//     std::cout << sum2() << '\n';
//     std::cout << sum1(input) << '\n';
//     std::cout << sum3() << '\n';
// }

// #include <iostream>
// int next_int1()
// {
//     static int cnt = 0;
//     cnt++;
//     return cnt;
// }

// int next_int2()
// {
//     int cnt = 0;
//     cnt++;
//     return cnt;
// }
// int global_count = 0;

// int next_int3()
// {
//     global_count++;
//     return global_count;
// }
// int main()
// {
//     for (int i = 0; i < 5; i++)
//         std::cout << next_int1() << " "
//                   << next_int2() << " "
//                   << next_int3() << '\n';
// }

// #include <iostream>
// using namespace std;

// static int bloab;

// int read()
// {
//     return bloab;
// }

// int increment()
// {
//     if (bloab < 5)
//     {
//         return bloab++;
//     }
// }

// int main()
// {
//     increment();
//     increment();
//     cout << read() << endl;
//     bloab += 5;
//     cout << read() << endl;
// }

// #include <iostream>
// int max(int n) { return n; }

// int max(int m, int n) { return (m >= n) ? m : n; }

// int max(int m, int n, int r)
// {
//     int x = m;
//     if (n > x)
//         x = n;
//     if (r > x)
//         x = r;
//     return x;
// }

// int main()
// {
//     std::cout << max(4) << '\n';
//     std::cout << max(4, 5) << '\n';
//     std::cout << max(5, 4) << '\n';
//     std::cout << max(1, 2, 3) << '\n';
//     std::cout << max(2, 1, 3) << '\n';
//     std::cout << max(2, 1, 2) << '\n';
// }

// #include <iostream>
// using namespace std;

// int proc(int n)
// {
//     if (n < 1)
//         return 1;
//     else
//         return proc(n / 2) + proc(n - 1);
// }

// int main()
// {
//     cout << proc(0) << endl;
//     cout << proc(1) << endl;
//     cout << proc(2) << endl;
//     cout << proc(3) << endl;
//     cout << proc(5) << endl;
//     cout << proc(10) << endl;
//     cout << proc(-10) << endl;
// }

// #include <iostream>
// using namespace std;

// void midpoint(double x1, double y1, double x2, double y2, double &mx, double &my)
// {
//     mx = (x1 + x2) / 2;
//     my = (y1 + y2) / 2;
// }
// int main()
// {
//     double X;
//     double Y;
//     midpoint(0, 0, 4, 4, X, Y);
// }

// #include <iostream>
// using namespace std;

// int gcd(int m, int n)
// {
//     if (n == 0)
//         return m;
//     else
//         return gcd(n, m % n);
// }

// int main()
// {
//     cout << gcd(5, 1);
// }

// int iterative_gcd(int num1, int num2)
// {
//     // Determine the smaller of num1 and num2
//     int min = (num1 < num2) ? num1 : num2; // 1 is definitely a common factor to all ints
//     int largestFactor = 1;
//     for (int i = 1; i <= min; i++)
//         if (num1 % i == 0 && num2 % i == 0)
//             largestFactor = i; // Found larger factor
//     return largestFactor;
// }

// #include <iostream>
// using namespace std;

// void get_range(int &min, int &max)
// {
//     int lower, upper;
//     std::cout << "Please enter a data range within the bounds " << min << "..." << max << ": ";
//     do
//     { // Loop until acceptable values are provided
//         std::cin >> lower >> upper;
//         if (lower < min)
//             std::cout << lower << " is too low, please try again.\n";
//         if (upper > max)
//             std::cout << upper << " is too high, please try again.\n";

//     } while (lower < min || upper > max);
// }

// void bab(int &a)
// {
//     a = 5;
//     cout << a;
// }

// int main()
// {
//     int b = 5;
//     bab(b);
//     cout << b;
// }

// #include <iostream>
// using namespace std;

// void get_range(int min, int max, int &lower, int &upper)
// {
//     lower = 3;
//     upper = 5;
//     std::cout << "Please enter a data range within the bounds " << min << "..." << max << ": ";
//     do
//     { // Loop until acceptable values are provided
//         std::cin >> lower >> upper;
//         if (lower < min)
//             std::cout << lower << " is too low, please try again.\n";
//         if (upper > max)
//             std::cout << upper << " is too high, please try again.\n";

//     } while (lower < min || upper > max);
// }

// int main()
// {
//     int lower = 0;
//     int upper = 1;
//     get_range(10, 20, lower, upper);
// }

// #include <iostream>
// using namespace std;
// void Hanoi(int m, char start, char middle, char end)
// {
//     if (m == 1)
//     {
//         std::cout << "Move disc " << m << " from " << start << " to " << end
//                   << std::endl;
//     }
//     else
//     {
//         Hanoi(m - 1, start, end, middle);
//         std::cout << "Move disc " << m << " from " << start << " to " << end
//                   << std::endl;
//         Hanoi(m - 1, middle, start, end);
//     }
// }
// int main()
// {
//     bool a = true;
//     cout << a < endl;

//     // int discs = 3;
//     // Hanoi(discs, 'A', 'B', 'C');
// }

#include <iostream>
using namespace std;
asf
int main()
{
    int a = 1;
    int b = 2;
    int c = 1;
    int d = 2;
    cout << a << endl;
    a = b++;
}

//addres vs pointer vs reference