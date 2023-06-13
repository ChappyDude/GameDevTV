#include <cstdio>

int function(int i, const char * s)
{
    printf("This is function(%i, %s)\n", i, s);
    return i * 2;
}

int main()
{
    printf("This is main()\n");
    int x = function(47, "string");
    printf("x is %d\n", x);
    return 0;
}