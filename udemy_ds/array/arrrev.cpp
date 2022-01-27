#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements: \n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // print initial array
    cout << "The initial array is: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    //reversing using start and end pointers
    for (int start = 0, end = size - 1; start < end; start++, end--)
    {
        // swap them
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];
    }

    // printing the reversed array
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}