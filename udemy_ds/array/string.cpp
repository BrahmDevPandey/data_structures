#include <iostream>
using namespace std;

int main()
{
    string str = "aman";
    cout << str << endl;

    string *str2 = new string();
    *str2 = "pandey";
    cout << str << " " << *str2 << endl;
    return 0;
}
