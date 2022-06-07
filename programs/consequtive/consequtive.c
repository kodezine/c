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
        printf("%c",mCHAR[j]);
      }
      printf("\n");
    }
    return false;
}
uint8_t consequtive_Flip8bits(uint8_t input)
{
  uint8_t output=0;
  output= ~input;
  return (output);
}

uint8_t consequtive_shiftleft(uint8_t x)      //x is input and y is output
{
  uint8_t y=0;
  y= x<<1;
  return (y);
}

uint8_t ShiftLeftByBits(const uint8_t input, const uint8_t bitsToShiftLeft)
{
    uint8_t output=0;
    size_t i=0;
    for(i=0; i<=bitsToShiftLeft; i++)
    {
        output= input<<i;     
    }
    return(output);

}

