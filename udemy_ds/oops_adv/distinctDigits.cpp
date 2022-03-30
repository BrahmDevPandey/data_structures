// program to count all the 4-digit numbers having distinct digits
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    bool hasUnique(string); // function to check whether a string has all distict chars
    int num, count = 0;

    for (num = 1000; num <= 9999; num++)
    {
        if (hasUnique(to_string(num)))
        {
            cout << num << endl;
            count++;
        }
    }

    cout << "\n\n All such numbers are: " << count << endl;
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