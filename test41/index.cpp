#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;

public:
    Time(){};
    Time(int h, int m) : hour(h), minute(m){};

    void getTime()
    {
        cout << hour << " : " << minute << endl;
    }

    void setHour(int h)
    {
        hour = h;
        cout << hour << endl;
    }
    void setMinute(int min)
    {
        minute = min;
        cout << minute << endl;
    }
    void operator+(Time &inputTime)
    {
        minute = minute + inputTime.minute;
        hour = hour + inputTime.hour;
        hour += minute / 60;
        minute = minute % 60;

        cout << hour << " : " << minute << endl;
    }

    Time operator*(int n)
    {
        Time result;
        result.hour = hour * n;
        result.minute = minute * n;

        result.hour += minute / 60;
        result.minute = minute % 60;

        cout << result.hour << " : " << result.minute << endl;
        return result;
    }
};

int main()
{
    Time oneThirty(1, 30);
    Time result;

    result = oneThirty * 2;
    result.getTime();
}
