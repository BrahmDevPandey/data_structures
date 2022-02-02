#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[30];
    cin >> str;
    int len = strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << str[len - j - 1];
        cout << endl;
    }
    return 0;
}