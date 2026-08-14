#include <string>
#include <cctype>

bool check_password(std::string str, int min_length) {
    bool symbol{false}, upper{false}, lower{false}, digit{false};
    if (str.length() >= static_cast<size_t>(min_length)) {
        for (char c : str) {
            unsigned char uc = static_cast<unsigned char>(c);
            if (std::isdigit(uc)) digit = true;
            if (c == '!' || c == '#' || c == '$' || c == '%' || c == '^' || c == '*')
                symbol = true;
            if (std::islower(uc)) lower = true;
            if (std::isupper(uc)) upper = true;
            if (symbol && upper && lower && digit) break;}}
    return symbol && upper && lower && digit;
}