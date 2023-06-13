#include <cstdio>

int main()
{
    char cstring[] = "String";

    puts(cstring);

    for (size_t i = 0; cstring[i]; i++)
    {
        printf("%d: %c\n", i, cstring[i]);
    }
    return 0;
}