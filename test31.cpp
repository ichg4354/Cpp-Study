#include <iostream>
#include <vector>
using namespace std;

class BigUnsigned
{
private:
    vector<int> list;
    int testValue = 5;

public:
    BigUnsigned()
    {
        list = {0};
    };
    BigUnsigned(unsigned int new_value)
    {
        list.push_back(new_value);
    };
    BigUnsigned(BigUnsigned &inputClass){};

    friend BigUnsigned operator+(BigUnsigned &, BigUnsigned &);

    friend std::ostream &operator<<(std::ostream &, BigUnsigned &);

    void printVector()
    {
        int size = list.size();
        for (int i = 0; i < size; i++)
        {
            cout << list.at(i);
        }
    }
};

BigUnsigned operator+(BigUnsigned &A, BigUnsigned &B)
{
    BigUnsigned result;
    int sizeB = B.list.size();
    result = A;
    for (int i = 0; i < sizeB; i++)
    {
        result.list.push_back(B.list.at(i));
    }
    return result;
}

std::ostream &operator<<(std::ostream &os, BigUnsigned &inputClass)
{
    int size = inputClass.list.size();

    for (int i = 0; i < size; i++)
    {
        os << inputClass.list.at(i);
    }
    return os;
}

int main()
{
    BigUnsigned test = BigUnsigned(5);
    BigUnsigned test2 = BigUnsigned();
    cout << test2;
}