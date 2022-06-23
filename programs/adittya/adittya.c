#include<stdio.h>
#include"adittya.h"

int32_t adittya_one(int32_t *a , int32_t *b)
{
    int32_t returnValue=0;
    if(a==NULL || b==NULL)
    {
        ;       
    }
    else
    {
        returnValue= *a +*b;
    }
    return returnValue;
}