#include <iostream>
#include <vector>
using namespace std;

class Person
{
private:
    string name;
    int height;
    int age;

public:
    Person(int h, int a) : height(h), age(a){};
    void getPersonData()
    {
        cout << "HEIGHT: " << height << " "
             << "AGE: " << age << " NAME: " << name << endl;
    };
    void setName(string inputName)
    {
        name = inputName;
    }
};

void addPersonToVector(vector<Person> &list)
{
    string name;
    int height;
    int age;
    cout << "name ? height ? age ? ";
    cin >> name >> height >> age;
    Person dude = Person(height, age);
    dude.setName(name);

    list.push_back(dude);
}

int main()
{
    vector<Person> listOfPerson;
    addPersonToVector(listOfPerson);
    listOfPerson[0].getPersonData();
}