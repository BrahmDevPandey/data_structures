// program to difference between shallow and deep copy in c++
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    int age;
    char *name;

public:
    // Student(Student s)         // will create an infinite loop
    Student(Student const &s) // own copy constructor for deep copying arrays
    {
        this->age = s.age;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }

    Student(int age, char *name)
    {
        this->age = age; // int variable, normal value copying

        // shallow copy, copies only the address. so any changes made to name will be
        // reflected in this->name
        this->name = name;

        // deep copy, allocates a new location for this->name and copies
        // the value of name into this->name
        this->name = new char[strlen(name) + 1]; // +1 for null char
        strcpy(this->name, name);

        // NOTE: strlen() is used to calcluate the size of name and not sizeof()
        // because sizeof() will give only the size of the pointer,
        // i.e. the word length of the system
    }

    void display()
    {
        cout << "Student info: \n";
        cout << "Age: " << this->age << endl
             << "Name: " << this->name << endl;
    }

    void setName(char const name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    char name[] = "aman";
    Student s1(21, name);
    cout << "Details of s1: \n";
    s1.display();

    Student s2(s1); // copy constructor used
    s2.setName("ajay");
    cout << "Details of s2: \n";
    s2.display();

    cout << "Details of s1: \n";
    s1.display();

    // Student s1(21, name);
    // s1.display();

    // name[2] = 'p';
    // Student s2(23, name);
    // s2.display();

    // // no change to the details of s1 even if 'name[2]' is changed
    // s1.display();
    return 0;
}