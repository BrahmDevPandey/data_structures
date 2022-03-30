// program to demo copy constructors in c++
#include <iostream>
using namespace std;

class student
{
    int age;
    int roll;  
  public:
    student()       // default constructor
    {
        age = 0;
        roll = 0;
    }

    student(int age, int roll)      // parameterized constructor
    {
        // this is used to remove the ambiguity between the parameter age and the instance variable age
        this->age = age;
        this->roll = roll;
    }

    void getDetails() 
    {
        cin >> age >> roll;
    }
    
    void showDetails() 
    {
        cout << age << " " << roll << endl;
    }

    // custom destructor
    ~student() {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    // creating object using default constructor
    student s1;
    cout<<"Enter Details of s1\n";
    s1.getDetails();
    cout << "Details of s1\n";
    s1.showDetails();

    // creating object using paremeterized constructor
    student s2(20, 30);
    cout << "Details of s2\n";
    s2.showDetails();

    // creating object using the copy constructor
    student s3(s2);
    cout << "Details of s3\n";
    s3.showDetails();

    // creating a dynamic object
    student *s4 = new student(20, 21);
    cout << "Details of s4\n";
    s4->showDetails();

    // creating objects using copy constructor dynamically
    student *s5 = new student(*s4);
    cout << "Details of s5\n";
    s5->showDetails();

    // usiog copy assignment operator
    *s5 = s1;
    cout << "Updated etails of s5\n";
    s5->showDetails();

    // deleting the dynamically created objects 
    delete s4;
    delete s5;
}