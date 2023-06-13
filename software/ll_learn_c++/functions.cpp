#include <iostream>

using namespace std;

// Takes arg by value
int square(int x)
{
    x = x * x;
    return x;
}

// Takes arg by address
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Takes arg by reference
void swap_ref(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main(void)
{
    int a = 9, b;

    b = square(a);
    cout << "a = " << a << ", b = " << b << endl;

    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    swap_ref(a,b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}