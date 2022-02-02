#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];
    cin.getline(str1, 100);
    cin.getline(str2, 100);
    if (strcmp(str1, str2) == 0)
        cout << "Strings are equal.";
    else
        cout << "Strings are not equal.";
    cout << endl;
    // int len = strlen(str);
    // cout << "Length is: " << len << endl;
    return 0;
}