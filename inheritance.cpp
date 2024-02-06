#include <iostream>
using namespace std;

class parent
{
public:
    string name;
    int age;
    float gpa;

    // parent(string n, int a, float g)
    // {
    //     name = n;
    //     age = a;
    //     gpa = g;
    // }
    void print()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gpa << endl;
    }
};
class child : public parent
{
};

int main()
{
    child ch;
    cin >> ch.name;
    cin >> ch.age;
    cin >> ch.gpa;
    ch.print();
    return 0;
}