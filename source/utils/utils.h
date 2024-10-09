#ifndef UTILS_H
#define UTILS_H
#include "../libs.h"
#define vec2 std::pair<int, int>
namespace Utils {
    extern std::map<std::string, int> Mapa;
    void fillMap();
    void clear_console();
    std::pair<int, std::string> parse_args(C_STRING argv[], int argc);
}
#endif
