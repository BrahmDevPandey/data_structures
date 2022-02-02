// to demo the default initialization of arrays in c++
#include <iostream>
using namespace std;

int main()
{
    int arr[5][10] = {1};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}