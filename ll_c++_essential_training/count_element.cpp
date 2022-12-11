#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main()
{
    int count = 0;

    for (size_t i : string)
    {
        if (i == '\0') break;
        count++;
    }
    
    printf("The number of characters is: %d\n", count);
    return 0;
}