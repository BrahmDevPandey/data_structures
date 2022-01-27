#include <iostream>
using namespace std;

int main()
{
    // int m, n;
    // cout << "Enter the number of rows: ";
    // cin >> m;
    // cout << "Enter the number of columns: ";
    // cin >> n;

    // int arr[m][n];
    int arr[4][4] = {
        {10, 20, 30, 40},
        {60, 50, 20, 80},
        {10, 10, 10, 10},
        {60, 50, 60, 50}};

    cout << "The max energy that can be saved is " << maxEnergy(arr);
}

int maxEnergy(int arr[4][4])
{
    const int energy = 100;
}

int getEnergyLoss(int arr[4][4], int i, int j)
{
}