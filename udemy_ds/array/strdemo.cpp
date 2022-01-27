#include <iostream>
using namespace std;

int main()
{
    char str[20];
    cout << "Enter a string: ";
    cin.getline(str, 20);

    // cin >> str;  //cin reads only single word. terminates reading after space
    // cin.getline(str, 10);    //skips this if there are still some chars in input buffer
    // str[9] = 'n'; // changing the last character to null causes abnormal program crash
    cout << "You entered \n"
         << str << endl;
    return 0;
}