#include <stdio.h>

int main(int argc, char const *argv[])
{
    // long double a = 122;
    // printf("%Ld", sizeof(a));
    int a, b;
    printf("enter twp nos.: ");
    scanf("%d%d", &a, &b);
    printf("you entered %d and %d\n", a, b);
    printf("in p you entered %p and %p\n", a, b);
    printf("in p you entered %x and %x\n", a, b);
    printf("in pointer you entered %x and %x\n", &a, &b);
    return 0;
}
