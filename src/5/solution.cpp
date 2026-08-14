#include "find_char.h"
#include <string>
#include <iostream>


int find_char(std::string stroka, char ch, int from , int to) {
    if (to < 0) to = stroka.size();  // argument to perebiraet vsy stroky
    if (from > to) return -1; // nachalo dalshe konza -> Error

    for (int i = from; i < to; ++i) if (stroka[i] == ch) return i;  // zikl poiska indeksa simvola

    return -1; // esli 0 otvetov ot ysloviy-> simvola net
}
