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
    int32_t *a=NULL;
    int32_t *b=NULL;
    *a=10;
    *b=20;
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



