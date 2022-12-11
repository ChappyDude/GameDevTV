#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    string s = "String";
    for (int i = 0; i < s.size(); i++) // or i != 0 (Only char at end of string is zero)
    {
        cout << "char is " << s[i] << endl;
    }
    
    return 0;
}