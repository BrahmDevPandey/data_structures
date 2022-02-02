// program to implement getter and setter functions in a class
#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{
    student stu;
    int age, roll;
    cout << "Enter age: ";
    cin >> age;
    stu.setAge(age);

    cout << "Enter roll number: ";
    cin >> roll;
    stu.setRoll(roll);

    cout << "Details of student are: \n";
    cout << "\tRoll number: " << stu.getRoll() << "\n";
    cout << "\tAge: " << stu.getAge() << "\n";
    return 0;
}