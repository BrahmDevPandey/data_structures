#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> v;
    string name;
    while (1)
    {
        cout << "Enter a name: ";
        cin >> name;
        if (name == "exit")
        {
            break;
        }
        v.push_back(name);
    }

    int i = 0;
    cout << "Names entered by you are: " << endl;
    while (i < v.size())
    {
        cout << v[i] << endl;
        i++;
    }
    return 0;
}