// program to demo operator overloading in c++
#include <iostream>
using namespace std;

class Employee
{
    const int id;
    int salary;
    int &ref;

public:
    Employee(int id, int salary) : id(id), ref(this->salary) // id, being a const member and ref being a reference member, have to be initialized in the init list
    {
        this->salary = salary;
    }

    void display()
    {
        cout << "ID: " << id << endl
             << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e(12, 13000);
    e.display();
    return 0;
}