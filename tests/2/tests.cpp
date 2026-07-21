#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int min(int, int);

TEST_CASE("testing min") {
    CHECK(min(1, 1) == 1);
    CHECK(min(5, 6) == 5);
    CHECK(min(-5, -6) == -6);
    CHECK(min(2147483647, 2147483647) == 2147483647);
    CHECK(min(2147483647, -2147483648) == -2147483648);
    CHECK(min(-2147483648, -2147483648) == -2147483648);
    CHECK(min(-2147483648, 2147483647) == -2147483648);
}
