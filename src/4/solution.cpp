#include "password_checker.h"
#include <string>
#include <cctype>
#include <iostream>

bool check_password(std::string p, int min_length) {
    if (p.length() < min_length) return false;

    bool upper=false,lower=false,digit=false,special=false;
    std::string spec = "!#$%^*";

    for (char c : p) {
        if (std::isupper(c)) upper=true;
        else if (std::islower(c)) lower=true;
        else if (std::isdigit(c)) digit=true;
        else if (spec.find(p)) special=true;
    }
    return upper && lower && digit && special;
}
