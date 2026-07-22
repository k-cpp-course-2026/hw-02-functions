#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

long long calc(std::string);

TEST_CASE("testing calc") {
    CHECK(calc("1 + 2 * 3") == 7);
    CHECK(calc("(1 + 2) * 3") == 9);
    CHECK(calc("10 - 3 - 2") == 5);
    CHECK(calc("20 / 5 / 2") == 2);
    CHECK(calc("2 * 3 + 4") == 10);
    CHECK(calc("2 + 3 * 4 - 5") == 9);
    CHECK(calc("100 / (2 * 5)") == 10);
    CHECK(calc("11/4") == 2);
    CHECK(calc("(10 - 2) / (3 + 1)") == 2);
    CHECK(calc("2 * (3 + 4 * (5 - 2))") == 30);
    CHECK(calc("50 - 10 * 2 + 3") == 33);
    CHECK(calc("8 / 2 * 4") == 16);
    CHECK(calc("8 * 2 / 4") == 4);
    CHECK(calc("1+2+3+4-5+6-7+8*3") == 28);
    CHECK(calc("(23+34*4)*9/5+3*(4-3-2-1*3)*(3)-23") == 227);
    CHECK(calc("(((((5)))))") == 5);
    CHECK(calc("(1 - (2 - (3 - 4)))") == -2);
    CHECK(calc("1 - 2 - 3 - 4") == -8);
    CHECK(calc("(((1 - 2) - 3) - 4)") == -8);
}

