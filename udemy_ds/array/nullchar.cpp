#include <iostream>
using namespace std;

int main()
{
    char str[20];
    cout << "Enter a string: ";
    cin >> str;
    str[4] = '\0';
    cout << "You have entered " << str << endl;
    return 0;
}