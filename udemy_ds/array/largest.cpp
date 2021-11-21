// program to find the largest and the smallest elements in an array
#include <iostream>
using namespace std;

int main()
{
    //reading the number of elements to be read
    int size = 0;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];

    //reading the elements
    cout << "Enter " << size << " elements: \n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    //finding the largest and the smallest elements
    /*
    Logic: We suppose that the first element is the smallest and the largest.
    Then we traverse the array and check whether the current element is larger
    or smaller than the currently chosen smallest and largest element.
    If the current element is smaller than the chosen smallest, we choose the current element to be the smallest one. 
    Or if the current is larger than the currently chosen largest element, we choose the current element to be the largest one.
    We repeat the above process for all the elements and print the largest and
    the smallest in the end.
    */

    // int largest = 0, smallest = 0;
    // the above fails for all positive or all negative numbers

    int largest = arr[0], smallest = arr[0];
    // the above fails if the array is empty so checking for that beforehand

    if (size == 0)
    {
        cout << "Empty Array!" << endl;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < smallest)
                smallest = arr[i];
            else if (arr[i] > largest)
                largest = arr[i];
        }

        cout << "Largest element in the array: " << largest << endl;
        cout << "Smallest element in the array: " << smallest << endl;
    }
    return 0;
}