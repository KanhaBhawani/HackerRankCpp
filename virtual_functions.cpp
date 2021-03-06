#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};
class Professor : public Person
{
    int publications;
    static int id;

public:
    void getdata()
    {
        cin >> name >> age >> publications;
    }
    void putdata()
    {
        cout << name << " " << age << " " << publications << " "
             << id << endl;
    id++;
    }
};

class Student : public Person
{
    int m[6];
    static int id;

public:
    void getdata()
    {
        cin >> name >> age;
        for (unsigned i = 0; i < 6; i++)
        {
            cin >> m[i];
        }
    }
    void putdata()
    {
        int sum = 0;
        for (unsigned int i = 0; i < 6; i++)
        {
            sum += m[i];
        }
        cout << name << " " << age << " " << sum << " "
             << id << endl;
        id++;
    }
};
int Student:: id = 1;
int Professor:: id = 1;

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}