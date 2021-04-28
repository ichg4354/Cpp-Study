#include <iostream>
using namespace std;

void calculateRisePercentage(int begin, int later)
{
    float difference = later - begin;
    float percentage = difference / begin * 100.;
    cout << begin << "-->" << later << " : " << percentage << '%' << endl;
}

int main()
{
    calculateRisePercentage(5474,5551);
}