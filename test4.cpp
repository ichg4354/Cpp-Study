#include <iostream>
#include <vector>

using namespace std;

vector<int> paste()
{
    vector<int> copytarget = {1, 2, 3};
    return copytarget;
}

int main()
{
    vector<int> target(5);
    target = paste();

    for (int i = 0; i < 3; i++){
        cout << target[i] << endl;
    }
}