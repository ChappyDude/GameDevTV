#include <cstdio>
#include <vector>
#include <typeinfo>

int main()
{
    std::vector<int> vi = {1, 2, 3, 4, 5};

    for (auto i = vi.begin(); i != vi.end(); i++)
    {
        printf("int is %d\n", *i);
    }
    
    return 0;
}