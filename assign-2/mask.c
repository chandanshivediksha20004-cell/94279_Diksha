#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t reg = 0xABCD;

    uint8_t lower4;
    uint8_t upper4_lowerByte;


    uint8_t min1 = 0;
    uint8_t max1 = 3;
    uint8_t mask1 = (1 << (max1 - min1 + 1)) - 1;

    lower4 = (reg >> min1) & mask1;

    
    uint8_t min2 = 4;
    uint8_t max2 = 7;
    uint8_t mask2 = (1 << (max2 - min2 + 1)) - 1;

    upper4_lowerByte = (reg >> min2) & mask2;

    printf("Register value              : 0x%X\n", reg);
    printf("Lower 4 bits                : 0x%X\n", lower4);
    printf("Upper 4 bits of lower byte  : 0x%X\n", upper4_lowerByte);

    return 0;
}