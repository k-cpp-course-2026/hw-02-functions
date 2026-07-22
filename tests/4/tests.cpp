#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "password_checker.h"

TEST_CASE("testing check_password(std::string)") {
    CHECK(check_password("1234!Aa") == false);
    CHECK(check_password("12345!Aa") == true);
    CHECK(check_password("123456!Aa") == true);
    CHECK(check_password("1234567Aa") == false);
    CHECK(check_password("123456!aa") == false);
    CHECK(check_password("123456!AA") == false);
    CHECK(check_password("aaaaaaaaaaaa!Aa") == false);
    CHECK(check_password("27hnNENnc9b#sd") == true);
    CHECK(check_password("AAm2*dl2") == true);
    CHECK(check_password("123456#Aa") == true);
    CHECK(check_password("123456$Aa") == true);
    CHECK(check_password("123456%Aa") == true);
    CHECK(check_password("123456^Aa") == true);
    CHECK(check_password("123456*Aa") == true);
}

TEST_CASE("testing check_password(std::string, int min_length)") {
    CHECK(check_password("12345!Aa", 9) == false);
    CHECK(check_password("123456!Aa", 10) == false);
    CHECK(check_password("27hnNENnc9b#sd", 15) == false);
    CHECK(check_password("AAm2*dl2", 9) == false);
    CHECK(check_password("123456#Aa", 10) == false);
    CHECK(check_password("123456$Aa", 10) == false);
    CHECK(check_password("123456%Aa", 10) == false);
    CHECK(check_password("123456^Aa", 10) == false);
    CHECK(check_password("123456*Aa", 10) == false);
}
