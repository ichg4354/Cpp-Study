#include <iostream>
using namespace std;

int main()
{
    int length, width;
    cout << "Please enter the length ";
    cin >> length;
    cout << "Please enter the width ";
    cin >> width;
    cout << "The area of this rectangle is " << length * width
         << " and the perimeter of this rectangle is " << 2 * (width + length) << endl;
}