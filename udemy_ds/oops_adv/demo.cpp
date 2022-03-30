#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    bool hasUnique(string);
    string str = "12" + to_string(124);
    cout << hasUnique(str);
    return 0;
}

bool hasUnique(string s)
{
    sort(s.begin(), s.end());
    int len = s.length();

    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == s[i + 1])
            return false;
    }

    return true;
}