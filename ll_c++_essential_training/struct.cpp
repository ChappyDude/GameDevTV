#include <iostream>
#include <cstdio>   // For printf()

using namespace std;

struct S
{
    int i;
    double d;
    const char * s;
};


int main()
{
    S s1 = {3, 47.9, "string one"};

    s1.d = 73;
    printf("s1: %d, %f, %s\n", s1.i, s1.d, s1.s);

    return 0;
}