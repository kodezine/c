#include<stdbool.h>
#include<stddef.h>
#include"adittya.h"

int32_t adittya_one(int32_t *a , int32_t *b)
{
    int32_t returnValue = 0;
    do{
        if(a == NULL)
        {
            break;
        }
        if(b == NULL)
        {
            break;
        }
        returnValue = (*a) + (*b);
    }while(false);
    return returnValue;
}
