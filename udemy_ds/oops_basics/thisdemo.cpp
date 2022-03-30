// program to demo the implementation of constructors in a class
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
};

int main()
{
    student s;
    cout<<"Details of s1\n";
    s.getDetails();
    s.showDetails();

    cout << "Details of s2\n";
    student s2(20, 30);
    s2.showDetails();
}