#include <iostream>
using namespace std;

class Rational
{
private:
    static int gcd(int a, int b)
    {
        int temp, n;
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        while (b != 0)
        {
            n = a % b;
            a = b;
            b = n;
        }
        return a;
    }

    static int lcm(int a, int b)
    {
        return a * b / gcd(a, b);
    }

public:
    int num;
    int denom;
    Rational(int n, int d) : num(n), denom(d){};
    Rational() : num(0), denom(1){};

    Rational operator+(const Rational &b)
    {
        int resultdenom = lcm(this->denom, b.denom);
        int keyA = resultdenom / this->denom;
        int keyB = resultdenom / b.denom;
        return Rational(keyA * this->num + keyB * b.num, resultdenom);
    }

    Rational reduce()
    {
        int val = 0;
        if ((denom / num) > 0)
        {
            val = gcd(denom, num);
            return (Rational(num / val, denom / val));
        }
        return (Rational(num, denom));
    }

    Rational operator*(const Rational &b)
    {
        int resultdenom = this->denom * b.denom;
        int resultnum = this->num * b.num;
        return (Rational(resultnum, resultdenom).reduce());
    }
};

ostream &operator<<(ostream &os, Rational &a)
{
    os << a.num << "/" << a.denom;
    return os;
};

int main()
{
    Rational a(3, 6);
    Rational b(1, 3);
    Rational result = a * b;
    cout << result << endl;
}