#include <stdbool.h>
#include "ut_moduloSender.h"
#include "moduloSender.h"


void test_moduloSender_printStream_allOK(void)
{
    uint8_t myStream[] = {'A', 'd', 'i', 't', 't', 'y', 'a', '\0'};
    int32_t retVal = 0;
    retVal = printStream(myStream);
    TEST_ASSERT_EQUAL(7, retVal);
}

void test_moduloSender_printStream_NullAtBeginning(void)
{
    uint8_t myStream[] = {'\0','A', 'd', 'i', 't', 't', 'y', 'a'};
    int32_t retVal = 0;
    retVal = printStream(myStream);
    TEST_ASSERT_EQUAL(0, retVal);
}
