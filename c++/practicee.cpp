#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll;

    void get()
    {
        cout << "enter name";
        cin >> name;
        cout << "enter roll no";
        cin >> roll;
    }
    void get_display()
    {
        cout << "the name is" << name << endl;
        cout << "roll no is: " << roll << endl;
    }
};
class info : public student
{
    float marks;

public:
    info()
    {
        name = "unknown";
        roll = 0;
        marks = 0;
    }

    void get_info()
    {
        cout << "enter marks";
        cin >> marks;
    }

    void display()
    {
        get_display();
        cout << "the marks obtained are: " << marks << endl;
    }
};
int main()
{
    info i, i1;
    i.display();
    i1.get_info();
    i1.display();
    return 0;
}