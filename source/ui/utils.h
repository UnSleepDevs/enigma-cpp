#ifndef UTILS_H
#define UTILS_H
#include "../libs.h"
namespace Utils {
    void setCursorPosition(int PosX, int PosY, std::string &value);
    void ResetCursorPosition();
    std::pair<int, int> getConsoleSize();
    std::pair<int, std::string> parse_args(char **argv, int argc);
}
#endif
