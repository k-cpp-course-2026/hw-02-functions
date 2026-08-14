#include <string>
#include <cctype>

bool check_password(std::string str, int min_length){
    bool symbol{false}; bool upper{false}; bool lower{false}; bool digit{false};
    if(str.length() >= min_length){
    for (char c : str) {
        if(isdigit(c) == true){digit = true;}
        if(c == '!' || c == '#' || c == '$'|| c == '%' || c == '^' || c == '*' ){symbol = true;}
        if(islower(c)){lower = true;}
        if(isupper(c)){upper = true;} 
    }
}
    if(symbol && upper && lower && digit){
        return true;
    }else{
        return false;
    }

}