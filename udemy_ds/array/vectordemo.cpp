// program to demo the use of vectors in cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> v;
    v.push_back("ram");
    v.push_back("quest");
    v.push_back("ajit");

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    //     sort(v[i].begin(), v[i].end());
    // }
    // cout << endl;

    // sort(v.begin(), v.end());

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     // cin >> v[i];     //doesn't take spaced strings
    //     getline(cin, v[i]);
    // }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // concatenation using + operator
    string s3 = v[1] + v[0];
    cout << s3 << endl;
    cout << s3.substr(1, 4) << endl;
    cout << s3.find("uest") << endl;
    s3 = to_string(50);
    int num = atoi(s3.c_str()) + 20;
    cout << num << endl;
    v.push_back(to_string(num));
    v.push_back(to_string(123));
    cout << v[v.size() - 1] << endl;
    return 0;
}