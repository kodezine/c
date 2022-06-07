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
      for (size_t j = 0; j <= i; j++)
      {
        printf("%c",'a' + j);
      }
      printf("\n");
    }
        
    return false;
}
