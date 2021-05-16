#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream inStream;
    ofstream outStream;

    inStream.open("text.txt");
    outStream.open("text2.txt");

    char Box;

    while (inStream.get(Box))
    {
        outStream.put(Box);
    }

    inStream.close();
    outStream.close();
}