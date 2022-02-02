// program to demo the use of classes in c++
#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int age;
    string name;
};

int main()
{
    Student s1;                // creating an object of class Student
    Student *s2 = new Student; // creating a pointer of Type student

    cout << "Enter student 1 details: " << endl;
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cin.ignore(256, '\n');
    cout << "Enter Name: ";
    getline(cin, s1.name);
    cout << "Enter age: ";
    cin >> s1.age;

    cout << "Enter student 2 details: " << endl;
    cout << "Enter roll number: ";
    cin >> s2->roll;
    cin.ignore(256, '\n');
    cout << "Enter Name: ";
    getline(cin, s2->name);
    cout << "Enter age: ";
    cin >> s2->age;
    return 0;
}