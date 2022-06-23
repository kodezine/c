#include <limits.h>
#include"ut_adittya.h"
#include"adittya.h"

void test_adittya_adittya_one_addition(void)
{
    int32_t a=10;
    int32_t b= 20;
    int32_t retVal = adittya_one(&a, &b);
    TEST_ASSERT_EQUAL(30, retVal);
}

void test_adittya_adittya_one_additionpointers(void)
{
    int32_t x, y;
    int32_t *a=NULL;
    int32_t *b=NULL;
    a=&x;
    b=&y;
    x = 10; y = 20;
    int32_t retVal = adittya_one(a,b);
    TEST_ASSERT_EQUAL(30, retVal);
}

void test_adittya_adittya_one_additionNullPtr(void)
{
    int32_t *a=NULL;
    int32_t *b=NULL;
    int32_t retVal = adittya_one(a,b);
    TEST_ASSERT_EQUAL(30, retVal);
}

void test_adittya_adittya_one_CheckUpperLimit(void)
{
    int32_t a = INT32_MAX;
    int32_t b = 1;
    int32_t retVal = adittya_one(&a, &b);
    TEST_ASSERT_EQUAL_INT64((int64_t)INT32_MAX+1, retVal);
}

