#include <cstdio>

int main()
{
    int x = 7;
    int * ip = &x;
    const int & y = x;    // Integer reference variable y that stores value of x

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    return 0;
}