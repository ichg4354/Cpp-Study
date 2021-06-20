#include <iostream>
#include <vector>
using namespace std;

template <class t>
t sum(vector<t> &list)
{
    t result = 0;
    for (t each : list)
    {
        result += each;
        cout << each << endl;
    }
    cout << result << endl;
    return result;
}

int main()
{
    vector<double> list = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    sum(list);
}