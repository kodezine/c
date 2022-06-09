
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "consequtive.h"

int main(int argc, char *argv[])
{

    const uint8_t input = 50;
    const uint8_t bits = 1;
    uint8_t c=ShiftLeftByBits(input,bits);
    printf("The output is %u for %u shifted left by %u bits\n", c, input, bits);
    printf("The output is %u for %u * (2^%u)\n", (uint32_t)(input * pow(2,bits)), input, bits);

}