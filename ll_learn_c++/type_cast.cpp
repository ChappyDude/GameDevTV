#include <iostream>
#include <cstdint>

using namespace std;

float flt = -7.44;
int32_t sgn;
uint32_t unsgn;

int main(void)
{
    sgn = flt;
    unsgn = sgn;

    cout << "Float: " << flt << endl;
    cout << "int32: " << sgn << endl;
    cout << "uint32: " << unsgn << endl;

    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5 / 9) * (fahrenheit - 32);

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Celsius: " << celsius << endl;

    float weight = 10.99;

    cout << endl;
    cout << "Float: " << weight << endl;
    cout << "Integer part: " << (int)weight << endl;
    cout << "Fractional part: " << (int)((weight - (int)weight) * 1000) << endl;
    return 0;
}