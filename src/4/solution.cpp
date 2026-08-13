#include <string>
#include <cctype>

bool check_password(std::string str, int min_length){
    int symbol{0}; int Upper{0}; int lower{0}; int digit{0};
    if(str.length() >= min_length){
    for (char c : str) {
        if(isdigit(c) == true){digit+=1;}
        if(c == '!' || c == '#' || c == '$'|| c == '%' || c == '^' || c == '*' ){symbol+=1;}
        if(islower(c)){lower+=1;}
        if(isupper(c)){Upper+=1;}
    }
}
    if(symbol > 0 && Upper > 0 && lower > 0 && digit > 0){
        return true;
    }else{
        return false;
    }

}