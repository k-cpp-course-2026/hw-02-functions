#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "find_char.h"

TEST_CASE("testing find_char") {
    std::string s = "hello world";
    CHECK(find_char(s, 'h') == 0);
    CHECK(find_char(s, 'w') == 6);
    CHECK(find_char(s, 'd') == 10);
    CHECK(find_char(s, 'z') == -1);
    CHECK(find_char("", 'a') == -1);

    CHECK(find_char(s, 'l', 0) == 2);
    CHECK(find_char(s, 'l', 3) == 3);
    CHECK(find_char(s, 'l', 4) == 9);
    CHECK(find_char(s, 'h', 1) == -1);

    CHECK(find_char(s, 'o', 0, 5) == 4);
    CHECK(find_char(s, 'o', 5, 8) == 7);
    CHECK(find_char(s, 'd', 0, 10) == -1);
    CHECK(find_char(s, 'd', 0, 11) == 10);
}

