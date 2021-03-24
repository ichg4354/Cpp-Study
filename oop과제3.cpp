// #include <iostream>
// using namespace std;

// void calculate(float x, float y)
// {
//     cout << x << " + " << y << " = " << x + y << endl;
//     cout << x << " - " << y << " = " << x - y << endl;
//     cout << x << " * " << y << " = " << x * y << endl;
//     cout << x << " / " << y << " = " << x / y << endl;
// }

// int main()
// {
//     float x, y;
//     cout << "Please enter the first number: ";
//     cin >> x;
//     cout << "Please enter the second number: ";
//     cin >> y;

//     calculate(x, y);
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int i1 = 2, i2 = 5, i3 = -3;
//     double d1 = 2.0, d2 = 5.0, d3 = -0.5;

//     cout << "a - " << i1 + (i2 * i3) << endl; //-13
//     cout << "b - " << i1 * (i2 + i3) << endl; // 4
//     cout << "c - " << i1 / (i2 + i3) << endl; // 1
//     cout << "d - " << i1 / i2 + i3 << endl; // 0.4 - 3 => -2
//     cout << "e - " << 3 + 4 + 5 / 3 << endl; //7 + 5/3 => 8
//     cout << "f - " << (3 + 4 + 5) / 3 << endl; // 4
//     cout << "g - " << d1 + (d2 * d3) << endl; // -0.5
//     cout << "h - " << d1 + d2 * d3 << endl; //-0.5
//     cout << "i - " << d1 / d2 - d3 << endl; //0.4 + 0.5 => 0.9
//     cout << "j - " << d1 / (d2 - d3) << endl; //2.5
//     cout << "k - " << d1 + d2 + d3 / 3 << endl;  //7.1666
//     cout << "l - " << (d1 + d2 + d3) / 3 << endl; //2.1666
//     cout << "m - " << d1 + d2 + (d3 / 3) << endl; // 6.8444..
//     cout << "n - " << 3 * (d1 + d2) * (d1 - d3) << endl; //52.5
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     double C, r;
//     const double PI = 3.14159;
//     cout >> "Please enter the circle's radius: ";
//     cin >> r;
//     C = 2 * PI * r;
//     cout << "Circumference is " << C << '\n';
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     double x1, y1, x2, y2;
//     char left_paren, comma, right_paren;

//     cout << "Please enter the first point: ";
//     cin >> left_paren >> x1 >> comma >> y1 >> right_paren;
//     cout << "Please enter the second point: ";
//     cin >> left_paren >> x2 >> comma >> y2 >> right_paren;

//     cout << "The midpoint of "
//          << "(" << x1 << ',' << y1 << ")"
//          << " and "
//          << "(" << x2 << ',' << y2 << ")"
//          << " is "
//          << "(" << (x1 + x2) / 2 << ',' << (y1 + y2) / 2 << ")" << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int length, width;
//     cout << "Please enter the length ";
//     cin >> length;
//     cout << "Please enter the width ";
//     cin >> width;
//     cout << "The area of this rectangle is " << length * width
//          << " and the perimeter of this rectangle is " << 2 * (width + length) << endl;
// }

#include <iostream>
using namespace std;

int main()
{
    float number = 3.141592;
    cout << int(number) % 10 << endl;
}