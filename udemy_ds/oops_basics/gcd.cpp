#include<iostream>

int gcd(int a, int b) {
    int divisor = a < b ? a : b;
    int dividend = a < b ? b : a;

    int r;
    while((r = dividend%divisor) > 0) {
        dividend = divisor;
        divisor = r;
    }
    return divisor;
}


int main() {
    std::cout << gcd(20, 30) << std::endl;
    return 0;   
}