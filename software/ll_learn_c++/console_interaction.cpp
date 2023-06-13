#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name_input;
    cout << "Please enter your name: ";
    cin >> name_input;
    cout << "Nice to meet you " + name_input;
    return 0;
}

