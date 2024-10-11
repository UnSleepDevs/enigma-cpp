#include "colors_unix.h"

void useColor(const std::array<std::string, 2> &color){
    std::string fisrt = color[0];
    std::string second = color[1];
    if(fisrt == "")
        fisrt = DEFAULT;
    if(second == "")
        second = DEFAULT_BACK;


    std::cout << fisrt << second;
}
