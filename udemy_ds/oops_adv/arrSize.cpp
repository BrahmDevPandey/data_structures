#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    void findSize(char *);
    char arr[] = "aman pandey";
    char *ptr = "aman pandey";

    findSize(arr);
    findSize(ptr);
    cout << "length of aman: " << strlen(arr) << endl;
    cout << "size of aman: " << sizeof(arr) << endl;
    cout << "length of ptr: " << strlen(ptr) << endl; // that's why strlen is used to calculate the size of dynamic arrays
    cout << "size of ptr: " << sizeof(ptr) << endl;
    return 0;
}

void findSize(char *arr)
{
    cout << "The size of arr in function is: " << sizeof(arr) << endl;
}