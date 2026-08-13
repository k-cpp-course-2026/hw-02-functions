#include "find_char.h"

int find_char(std::string str, char ch, int from, int to) {
    int len = static_cast<int>(str.size());

    if (from < 0) from = 0;
    if (from >= len) return -1;

    if (to == -1 || to > len) to = len;
    if (from >= to) return -1;

    for (int i = from; i < to; ++i) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}