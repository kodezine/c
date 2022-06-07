/*
    Program to print a left aligned star pattern
*/
#include <stdio.h>
#include "common.h"
#include "stars.h"
void experiments_StarsLeftAligned(const char pattern, const uint8_t rowsOfStars, bool isInverted)
{
    size_t i = 0;
    size_t j = 0;
    size_t starsInRow = 0;
    for(i = 0; i < rowsOfStars + 1; i++)
    {
        starsInRow = (isInverted) ? (rowsOfStars - i) : (i);
        printf("[%02d]\t|",(int)starsInRow);
        for(j = 0; j < starsInRow; j++)
        {
            putchar(pattern);
        }
        putchar('\n');
    }
}

void experiments_StarsRightAligned(const uint8_t rowsOfStars, bool isInverted)
{

}
