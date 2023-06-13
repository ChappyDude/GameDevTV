#include <cstdio>
#include <cstdint>

int main()
{
    printf("sizeof int8_t is %ld bits\n", sizeof(int8_t) * 8);
    printf("sizeof int16_t is %ld bits\n", sizeof(int16_t) * 8);
    printf("sizeof int32_t is %ld bits\n", sizeof(int32_t) * 8);
    printf("sizeof int64_t is %ld bits\n", sizeof(int64_t) * 8);

    printf("sizeof is uint8_t %ld bits\n", sizeof(uint8_t) * 8);
    printf("sizeof is uint16_t %ld bits\n", sizeof(uint16_t) * 8);
    printf("sizeof is uint32_t %ld bits\n", sizeof(uint32_t) * 8);
    printf("sizeof is uint64_t %ld bits\n", sizeof(uint64_t) * 8);

    return 0;
}