#include "ut_consequtive.h"
#include "consequtive.h"

void test_consequtive_areNumbersConsequtive(void)
{
    bool retVal = consequtive_areNumbersConsequtive('a','b');
    TEST_ASSERT_EQUAL(true, retVal);
    retVal = consequtive_areNumbersConsequtive('x','z');
    TEST_ASSERT_EQUAL(false, retVal);
}