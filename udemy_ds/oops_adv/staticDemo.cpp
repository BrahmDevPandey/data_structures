// demo the concept of static members in a class
#include <iostream>
using namespace std;

class Student
{
    int roll;
    int age;
    static int totalStudents;

public:
    Student() // non-static functions can access both static and non-static memebers
    {
        this->roll = 0;  // non-static member
        this->age = 0;   // non-static member
        totalStudents++; // static member
    }

    static int getTotalStudents() // static functions can access only static members of class
    {
        // cout << age << endl;     // error
        return totalStudents;
    }
};

int Student::totalStudents = 0; // initializing static member of class

int main()
{
    Student s1;
    Student s2, s3;
    cout << "Total students accessed through s2: " << s2.getTotalStudents() << endl;
    cout << "Total students accessed through class: " << Student::getTotalStudents() << endl;
    return 0;
}