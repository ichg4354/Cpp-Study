#include <iostream>
#include <vector>

using namespace std;

class Account
{
private:
public:
    string name;
    int id;
    double balance;
    Account(){};
};

void createAccountInstance(vector<Account> *lists)
{
    Account createdAccount;
    string n;
    int i;
    double b;
    cout << "Enter name, account number, and account balance: ";
    cin >> n >> i >> b;
    createdAccount.name = n;
    createdAccount.id = i;
    createdAccount.balance = b;
    (*lists).push_back(createdAccount);
}

void printAccount(vector<Account> &lists)
{
    for (Account each : lists)
    {
        cout << each.name << " " << each.id << " " << each.balance << endl;
    }
}

void swap(int &a, int &b)
{
    int station = a;
    a = b;
    b = station;
}

bool sortByName(Account &a, Account &b)
{
    return a.name < b.name;
}
bool sortById(Account &a, Account &b)
{
    return a.id < b.id;
}
bool sortByBalance(Account &a, Account &b)
{
    return a.balance < b.balance;
}

void printAll(vector<int> &list)
{
    for (int each : list)
    {
        cout << each << endl;
    }
};

void sortVector(vector<Account> &list, bool (*sortSetting)(Account &, Account &))
{
    int n = list.size();
    for (int i = 0; i < n - 1; i++)
    {
        int keyVal = i;
        for (int a = i + 1; a < n; a++)
        {
            if (sortSetting(list[a], list[keyVal]))
            {
                cout << "SORRT";
                keyVal = a;
            }
        }
        swap(list[i], list[keyVal]);
    }
}
int main()
{
    char inputChar;
    bool flag = true;
    vector<Account> list;
    vector<Account> *ptr = &list;

    while (flag)
    {
        cout << "[A]dd [N]ame [I]D [B]alance [Q]uit==> ";
        cin >> inputChar;
        if (inputChar == 'A' || inputChar == 'a')
        {
            createAccountInstance(ptr);
        }
        else if (inputChar == 'N' || inputChar == 'n')
        {
            sortVector(list, sortByName);
            printAccount(list);
        }
        else if (inputChar == 'I' || inputChar == 'i')
        {
            sortVector(list, sortById);
            printAccount(list);
        }
        else if (inputChar == 'B' || inputChar == 'b')
        {
            sortVector(list, sortByBalance);
            printAccount(list);
        }
        else if (inputChar == 'Q' || inputChar == 'q')
        {
            flag = false;
        }
    }
}