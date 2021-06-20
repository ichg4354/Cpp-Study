#include <iostream>
#include <ctime>
using namespace std;

class Stopwatch
{
    clock_t startTime;
    bool running;
    double elapsedTime;

public:
    Stopwatch() : startTime(0), running(false), elapsedTime(0){};
    void start()
    {
        if (running != true)
        {
            running = true;
            startTime = clock();
        }
    }
    void stop()
    {
        if (running == true)
        {
            clock_t endTime = clock();
            running = false;
            elapsedTime += static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
            cout << elapsedTime << endl;
        }
    }
    void reset()
    {
        if (running)
        {
            stop();
        }
        running = false;
        elapsedTime = 0;
    }
    double elapsed() const
    {
        if (running)
        {
            clock_t currentTime = clock();
            cout << elapsedTime + static_cast<double>(currentTime - startTime) / CLOCKS_PER_SEC << endl;
            return elapsedTime + static_cast<double>(currentTime - startTime) / CLOCKS_PER_SEC;
        }
        else
        {
            cout << elapsedTime << endl;
            return elapsedTime;
        }
    }
    bool isRunning() const
    {
        return running;
    }
};

int main()
{
    Stopwatch test;
    test.start();
    for (int i = 0; i < 50000; i++)
    {
        for (int a = 0; a < 55550; a++)
        {
        }
    }
    test.elapsed();
    for (int i = 0; i < 50000; i++)
    {
        for (int a = 0; a < 55550; a++)
        {
        }
    }
    test.stop();
};