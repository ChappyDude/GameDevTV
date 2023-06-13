#include <cstdio>

class C
{
private:
    int i = 0;

public:
    void setValue(int val) {i = val;}
    int getValue() {return i;}
};


int main()
{
    int i = 47;
    C objectOne;
    C objectTwo;
    C objectThree;

    objectOne.setValue(i);
    objectTwo.setValue(i * 2);
    objectThree.setValue(i * 3);
    printf("Value is %d\n", objectOne.getValue());
    printf("Value is %d\n", objectTwo.getValue());
    printf("Value is %d\n", objectThree.getValue());

    return 0;
}