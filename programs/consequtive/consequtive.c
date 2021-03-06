#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "consequtive.h"

static const uint8_t mCHAR[] =
{
    'a', 'b', 'c', 'd', 'e', 'f'
};

bool
consequtive_areNumbersConsequtive(uint8_t const xChar, uint8_t const yChar)
{
    size_t i = 0;
    uint8_t *now = NULL, *next = NULL;
    now = (uint8_t *)mCHAR;
    for(i = 0; i < sizeof(mCHAR) - 1; i++)
    {
        next = now + 1;
        printf("\n now is %c \t next is %c", *now, *next);

        if((*now == xChar) && (*next == yChar))
        {
            return true;
        }
        if((*now == yChar) && (*next == xChar))
        {
            return true;
        }
        now++;
    }
    return false;
}
