#include "password_checker.h"
#include <string>
#include <iostream>

bool check_password(std::string p, int min_length) {
    if (p.length() < min_length) return false;

    bool upper,lower,digit,special = 0;
    std::string spec = "!#$%^*";

    for (int c : p) {
        if (std::isupper(c)) upper=1;
        else if (std::islower(c)) lower=1;
        else if (std::isdigit(c)) digit=1;
        else if (p.find(spec)) special=1;
    }
    if (upper+lower+digit+special==4) {return upper && lower && digit && special;} else return false;
}
