#include <iostream>
#include <numeric>
#include <valarray>

using namespace std;

int main(void)
{
    valarray<int> integers = {1, 23, 32, 24, 337};
    float sum = integers.sum();
    float average = sum / integers.size();

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}