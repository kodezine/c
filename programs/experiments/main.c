
#include <stdio.h>
#include <stdbool.h>
#include "common.h"
#include "stars.h"
#include "pyramid.h"

int main(int argc, char *argv[])
{
    experiments_StarsLeftAligned(STAR, 5,false);
    experiments_StarsLeftAligned(STAR, 5,true);
    experiments_Pyramid(STAR,11);
    return 0;
}