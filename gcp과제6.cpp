// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// int main()
// {
//     // Set the random seed value srand(static_cast<unsigned>(time(0)));
//     // Roll the die three times
//     for (int i = 0; i < 3; i++)
//     {
//         // Generate random number in the range 1...6
//         int value = rand() % 6 + 1;
//         // Show the die
//         std::cout << "+-------+\n";
//         switch (value)
//         {
//         case 1:
//             std::cout << "|       |\n";
//             std::cout << "|   *   |\n";
//             std::cout << "|       |\n";
//             break;
//         case 2:
//             std::cout << "|   *   |\n";
//             std::cout << "|       |\n";
//             std::cout << "|   *   |\n";
//             break;
//         case 3:
//             std::cout << "|   *   |\n";
//             std::cout << "|   *   |\n";
//             std::cout << "|   *   |\n";
//             break;
//         case 4:

//             std::cout << "|  * *  |\n";
//             std::cout << "|       |\n";
//             std::cout << "|  * *  |\n";
//             break;
//         case 5:
//             std::cout << "|  * *  |\n";
//             std::cout << "|   *   |\n";
//             std::cout << "|  * *  |\n";
//             break;
//         case 6:
//             std::cout << "| * * * |\n";
//             std::cout << "|       |\n";
//             std::cout << "| * * * |\n";
//             break;
//         default:
//             std::cout << " *** Error: illegal die value ***\n";
//             break;
//         }
//         std::cout << "+-------+\n";
//     }
// }

// #include <iostream>
//  #include <cmath>

// /* * help_screen * Displays information about how the program works * Accepts no parameters * Returns nothing */
// void help_screen()
// {
//     std::cout << "Add: Adds two numbers\n";
//     std::cout << " Example: a 2.5 8.0\n";
//     std::cout << "Subtract: Subtracts two numbers\n";
//     std::cout << " Example: s 10.5 8.0\n";
//     std::cout << "Print: Displays the result of the latest operation\n";
//     std::cout << " Example: p\n";
//     std::cout << "Help: Displays this help screen\n";
//     std::cout << " Example: h\n";
//     std::cout << "Quit: Exits the program\n";
//     std::cout << " Example: q\n";
// }

// /* * menu * Display a menu * Accepts no parameters * Returns the character entered by the user. */
// char menu()
// {
//     // Display a menu

//     std::cout << "=== A)dd S)ubtract P)rint H)elp Q)uit ===\n";

//     // Return the char entered by user

//     char ch;

//     std::cin >> ch;

//     return ch;
// }

// /* * main * Runs a command loop that allows users to * perform simple arithmetic.

// */
// int main()
// {

//     double result = 0.0, arg1, arg2;

//     bool done = false; // Initially not done

//     do
//     {

//         switch (menu())
//         {
//         case 'A': // Addition
//         case 'a':

//             std::cin >> arg1 >> arg2;
//             result = arg1 + arg2;
//             std::cout << result << '\n';
//             break;
//         case 'S': // Subtraction case 's':

//             std::cin >> arg1 >> arg2;
//             result = arg1 - arg2; // Fall through, so it prints the result case 'P': // Print result case 'p':

//             std::cout << result << '\n';
//             break;
//         case 'H': // Display help screen case 'h':

//             help_screen();
//             break;
//         case 'Q': // Quit the program case 'q':

//             done = true;
//             break;
//         }

//     } while (!done);
// }

// #include <iostream>
// /* * get_int_range(first, last) * Forces the user to enter an integer within a * specified range * first is either a minimum or maximum acceptable value * last is the corresponding other end of the range, * either a maximum or minimum * value * Returns an acceptable value from the user */
// int get_int_range(int first, int last)
// {
//     // If the larger number is provided first, // switch the parameters
//     if (first > last)
//     {
//         int temp = first;
//         first = last;
//         last = temp;

//     } // Insist on values in the range first...last
//     std::cout << "Please enter a value in the range " << first << "..." << last << ": ";
//     int in_value; // User input value
//     bool bad_entry;
//     do
//     {
//         std::cin >> in_value;
//         bad_entry = (in_value < first || in_value > last);
//         if (bad_entry)
//         {
//             std::cout << in_value << " is not in the range " << first << "..." << last << '\n';
//             std::cout << "Please try again: ";
//         }
//     } while (bad_entry);
//     return in_value;
// }
// /* * main * Tests the get_int_range function */
// int main()
// {
//     std::cout << get_int_range(10, 20) << '\n';
//     std::cout << get_int_range(20, 10) << '\n';
//     std::cout << get_int_range(5, 5) << '\n';
//     std::cout << get_int_range(-100, 100) << '\n';
// }

// #include <iostream>
//  #include <cmath>

// bool equals(double a, double b, double tolerance) { return a == b || fabs(a - b) < tolerance; }

// int main()
// {
//     for (double i = 0.0; !equals(i, 1.0, 0.0001); i += 0.1)
//         std::cout << "i = " << i << '\n';
// }

// #include <iostream>
// #include <iomanip>

// // Print the column labels for an n x n multiplication table.

// void col_numbers(int n)
// {
//     std::cout << " ";
//     for (int column = 1; column <= n; column++)
//         std::cout << std::setw(4) << column; // Print heading for this column.

//     std::cout << '\n';
// }

// // Print the table's horizontal line at the top of the table
// // beneath the column labels.

// void col_line(int n)
// {

//     std::cout << " +";

//     for (int column = 1; column <= n; column++)

//         std::cout << "----"; // Print separator for this row.

//     std::cout << '\n';
// }

// // Print the title of each column across the top of the table // including the line separator.

// void col_header(int n)
// {

//     // Print column titles
//     col_numbers(n);

//     // Print line separator
//     col_line(n);
// }

// // Print the title that appears before each row of the table's
// // body.

// void row_header(int n)
// {
//     std::cout << std::setw(4) << n << " |";
//     // Print row label.
// }

// // Print the line of text for row n
// // This includes the row number and the
// // contents of each row.

// void print_row(int row, int columns)
// {

//     row_header(row);

//     for (int col = 1; col <= columns; col++)

//         std::cout << std::setw(4) << row * col; // Display product

//     std::cout << '\n'; // Move cursor to next row
// }

// // Print the body of the n x n multiplication table
// void print_contents(int n)
// {
//     for (int current_row = 1; current_row <= n; current_row++)
//         print_row(current_row, n);
// }

// // Print a multiplication table of size n x n.
// void timestable(int n)
// {
//     // First, print column heading
//     col_header(n);
//     // Print table contents
//     print_contents(n);
// }

// int get_int_range(int first, int last)
// {
//     // If the larger number is provided first, // switch the parameters
//     if (first > last)
//     {
//         int temp = first;
//         first = last;
//         last = temp;
//     } // Insist on values in the range first...last
//     std::cout << "Please enter a value in the range " << first << "..." << last << ": ";
//     int in_value; // User input value
//     bool bad_entry;
//     do
//     {
//         std::cin >> in_value;
//         bad_entry = (in_value < first || in_value > last);
//         if (bad_entry)
//         {
//             std::cout << in_value << " is not in the range " << first << "..." << last << '\n';
//             std::cout << "Please try again: ";
//         }
//     } while (bad_entry); // in_value at this point is guaranteed to be within range
//     return in_value;
// }
// int main()
// {
//     // Get table size from user; allow values in the // range 1...18.
//     int size = get_int_range(1, 18);
//     // Print a size x size multiplication table
//     timestable(size);
// }

// #include <iostream>

// using namespace std;

// void getHypotenuse(float a, float b)
// {
//     int hypotenuse = sqrt(a * a + b * b);
//     cout << "The hypotenuse is: " << hypotenuse << endl;
// }

// int main()
// {
//     getHypotenuse(3, 4);
// }

// #include <iostream>

// int proc(int x) { return 2 * x * x; }

// int main()
// {
//     int x = 10;
//     std::cout << proc(x) << '\n';
// }

// #include <iostream>
// using namespace std;

// void mean(int inputList[])
// {
//     int sum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         sum += inputList[i];
//     }
//     cout << "Mean is: " << sum / 5 << endl;
// }

// void geometricMean(int inputList[])
// {
//     int sum = 1;
//     for (int i = 0; i < 5; i++)
//     {
//         sum *= inputList[i];
//     }
//     cout << "Geometric Mean is: " << pow(sum, 1.0 / 5.0) << endl;
// }

// double reverse(int inputList[])
// {
//     double sum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         sum += (1.0 / inputList[i]);
//     }
//     return sum;
// }

// void harmonicMean(int inputList[])
// {
//     double sum = reverse(inputList);
//     cout << "Harmonic Mean is: " << 5 / sum << endl;
// }

// void calculate()
// {
//     int list[5];
//     for (int i = 0; i < 5; i++)
//     {
//         int num;
//         cout << "enter a Number: ";
//         cin >> num;
//         list[i] = num;
//     }
//     mean(list);
//     geometricMean(list);
//     harmonicMean(list);
// }

// int main()
// {
//     calculate();
// }

// #include <iostream>
// using namespace std;

// void Fibonacci(int n)
// {
//     int first = 0;
//     int second = 1;
//     for (int i = 0; i < n; i++)
//     {
//         cout << first << endl;
//         int blank = first;
//         first = second;
//         second = second + blank;
//     }
// }
// int main()
// {
//     Fibonacci(10);
// }

// #include <iostream>
// using namespace std;

// void permutation(int n, int r)
// {
//     int sum = 1;
//     for (int i = n; i > n - r; i--)
//     {
//         sum *= i;
//     }
//     cout << sum << endl;
// }

// int main()
// {
//     permutation(5, 3);
// }

#include <iostream>
using namespace std;

void calculate()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << endl;
    cout << "Calculating the soultion of: " << (a != 0 ? string(a) :) << (a != 0 ? "x^2 + " : " ");
    cout << b << (b != 0 ? "x + " : " ");
    cout << c << endl;
}

int main()
{
    calculate();
}