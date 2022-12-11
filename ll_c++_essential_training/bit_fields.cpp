#include <cstdio>
// Bit fields useful when theres alot of small properties to store
struct Prefs {
    bool likesMusic : 1;
    bool hasHair : 1;
    bool hasInternet: 1;
    bool hasDinosaur: 1;
    unsigned int numberOfChildren : 4;
};

int main() {
    Prefs homer;
    homer.likesMusic = true;
    homer.hasHair = false;
    homer.hasInternet = true;
    homer.hasDinosaur = false;
    homer.numberOfChildren = 3;

    printf("sizeof homer: %zd bits\n", sizeof(homer) * 8);
    printf("sizeof int: %zd bits\n", sizeof(int) * 8);

    if (homer.likesMusic) printf("homer likes music\n");
    if (homer.hasHair) printf("homer has hair\n");
    if (homer.hasInternet) printf("homer has internet\n");
    if (homer.hasDinosaur) printf("homer has dino\n");
    printf("homer has %d children", homer.numberOfChildren);

    return 0;
}