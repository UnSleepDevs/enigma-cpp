#ifndef COLORS_H
#define COLORS_H

#ifdef __linux__
#include "colors_unix.h"
#endif

#if defined(WIN32)
void useColors(const std::array<std::string, 2> &color){
    std::cout << "[WARNING] - Colors on terminal are not implemented yet on windows" << std::endl;
}
#endif
#endif
