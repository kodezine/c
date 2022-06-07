/*
    A Program to print a pyramid of * (Stars)
*/
#include <stdio.h>

#include "pyramid.h"
void experiments_Pyramid(const uint16_t numberOfRowsInPyramid)
{
    size_t i = 0;
    size_t j = 0;
    for(i = 0; i < numberOfRowsInPyramid; i++)
    {
        for(j = 0; j <= i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
}