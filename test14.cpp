#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inStream;

    inStream.open("test.txt");
    char c;
    while (inStream.get(c))
    {
        cout << c;
    }
}