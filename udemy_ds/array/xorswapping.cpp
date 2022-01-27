#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    cout << "Enter two numbers a and b: ";
    cin >> a >> b;

    cout << "The numbers before swapping:\n a= " << a << "; b= " << b << endl;

    //swapping using the xor operation
    a = a ^ b; // a = a ^ b
    b = a ^ b; // b = a ^ b ^ b = a [since b ^ b = 0 and a ^ 0 = a]
    a = a ^ b; // a = a ^ b ^ a = b [since b = a in second step]
    // so a becomes b and b becomes a
    // the bitwise xor operator actually does the swapping

    cout << "The numbers after swapping: \n a= " << a << "; b= " << b << endl;
    return 0;
}