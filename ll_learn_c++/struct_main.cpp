#include <iostream>
#include <string>
#include "struct.h"

using namespace std;

int a = 37;
int *ptr;
cow *my_cow;

int main()
{
    ptr = &a;
    cout << "The content of a is " << a << endl;
    cout << "ptr is pointing to address " << ptr << endl;
    cout << "The address of a is " << &a << endl;
    cout << "Where ptr is pointing, we have value " << *ptr << endl;
    cout << "The address of ptr is " << &ptr << endl; 

    my_cow = new cow("Hildy", 7, pet);
    cout << my_cow->get_name() << " is a type " << (int)my_cow->get_purpose() << " cow." << endl;
    cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << endl;

    delete my_cow;  // Deletes object after usage, to avoid memory leaks
    return 0;
}

// How to compile and link mulitple cpp files
// g++ struct_main.cpp struct.cpp -o file