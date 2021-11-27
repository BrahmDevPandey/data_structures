// program to sqaure all the elements of an array
#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    //reading size
    cout << "Enter size of array: ";
    cin >> size;

    //array declaration and values input
    int arr[size];
    // int arr[1000000];
    // cout << arr[10000004];

    cout << "Enter " << size << " elements: \n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    //priting the initial array
    cout << "The array is: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    //squaring all the elements
    for (int i = 0; i < size; i++)
        arr[i] = arr[i] * arr[i];

    //priting the squared elements
    cout << "The squared array is: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    // cout << sizeof(arr[0]);
    return 0;
}