#include <iostream>

using namespace std;

int main()
{
    const int one = 1;
    const int two = 2;
    const int three = 3;
    const int four = 4;

    int x = 3;
    switch (x)
    {
    case one:
        cout << "one" << endl;
        break;
    
    case two:
        cout << "two" << endl;
        break;

    case three:
        cout << "three" << endl;
        break;

    case four:
        cout << "four" << endl;
        break;

    default:
        break;
    }

    return 0;
}