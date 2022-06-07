#ifndef STARS_H
#define STARS_H
#include <stdint.h>
#include <stdbool.h>
void experiments_StarsLeftAligned(const char pattern, const uint8_t rowsOfStars, bool isInverted);
void experiments_StarsRightAligned(const uint8_t rows, bool isInverted);
#endif//STARS_H