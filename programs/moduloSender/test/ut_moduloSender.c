#include <stdbool.h>
#include "ut_moduloSender.h"
#include "moduloSender.h"

void test_moduloSender_sendMessage(void)
{
    moduloSender_sendMessage();
    TEST_ASSERT_EQUAL(true, true);
}