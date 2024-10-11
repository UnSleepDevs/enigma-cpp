#include "colors_unix.h"

std::string useBold(bool bold = false){
    return bold ? "\033[1m" : "\033[0m";
}

std::string useFaint(){
    return "\033[2m";
}

std::string useColor(const std::array<std::string, 2> &color){
    std::string first = color[0];
    std::string second = color[1];
    if(first == "" && second == "")
        return ALL_DEFAULT;
    if(first == "")
        first = DEFAULT;
    if(second == "")
        second = DEFAULT_BACK;


    return first + second;
}
