#include <iostream>
#include <vector>
using namespace std;

void print(Acc p)
{
    cout << p << endl;
}

class Acc
{
private:
public:
    string nickName;
    int password;
    void printAccData()
    {
        cout << nickName << " : " << password << endl;
    }
    Acc(string n, int p)
    {
        nickName = n;
        password = p;
    };
};
int main()
{
    vector<Acc> list;
    list.push_back({"Luis", 43544354});
    list[0].printAccData();
}