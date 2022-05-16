
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#include "consequtive.h"

int main(int argc, char *argv[])
{
    uint8_t xChar = 'c', yChar = 'b';
    bool isConsequtive = false;

    isConsequtive = consequtive_areNumbersConsequtive(xChar,yChar);
    if(isConsequtive)
    printf("\nThe %c and %c are found to be consecutive in the string", xChar, yChar);
    else
    printf("\nThe %c and %c are found to be not consecutively present", xChar, yChar);
    return 0;
}