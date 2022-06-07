/*
    A Program to print a pyramid of * (Stars)
*/
#include <stdio.h>
#include "common.h"
#include "stars.h"
#include "pyramid.h"
void experiments_Pyramid(const char pattern, const uint16_t numberOfRowsInPyramid)
{
    uint8_t i = 0;
    uint8_t j = 0;
    uint16_t rawSymbolsInRow = 0;
    uint16_t rawSymbolsInLastRow = (numberOfRowsInPyramid * 2) + 1;
    for(i = 0; i < numberOfRowsInPyramid; i++)
    {
        rawSymbolsInRow = (i * 2) + 1;
        printf("[%02d]\t|", i);
        for(j = 0; j < (numberOfRowsInPyramid - i); j++)
        {
            putchar(SPACE);
        }
        for(j = 0; j < rawSymbolsInRow; j++)
        {
            putchar(pattern);
        }
        putchar('\n');
    }
}