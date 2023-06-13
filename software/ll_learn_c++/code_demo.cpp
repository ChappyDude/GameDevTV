#include <iostream>

using namespace std;    // Using this so don't need to keep adding std::, 
                        // there are good and bad places to use this. Need to google

int a, b = 5; // Single line comment

/*  Multi
*   line
*   comment */

int main(void)
{
    bool my_flag;
    a = 7;
    my_flag = false;
    cout << "Hi There!" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "flag = " << my_flag << endl;
    my_flag = true;
    cout << "flag = " << my_flag << endl;
    cout << "a + b = " << a + b << endl;
    cout << "b - a = " << b - a << endl;
    unsigned int positive;
    positive = b - a;
    cout << "b - a (unsigned) = " << positive << endl;
    return 0;
}