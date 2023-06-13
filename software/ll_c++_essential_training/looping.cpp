#include <iostream>

using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int i = 0;
    char s[] = "string";

    // While loop
    while (i < 5)
    {
        if (i == 3) break;
        
        cout << "Element " << i << " is " << array[i] << endl;
        i++;
    }
    
    cout << endl;

    // Standard for loop
    for (size_t i = 0; i < 5; i++)
    {
        cout << "Element " << i << " is " << array[i] << endl;
    }
    
    cout << endl;

    // Python styled for loop
    for (char c : s)
    {
        if (c == 0) break;
        cout << "C is " << c << endl;
    }

    return 0;
}