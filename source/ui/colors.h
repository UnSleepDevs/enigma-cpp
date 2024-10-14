#ifndef COLORS_H
#define COLORS_H

#ifdef __linux__
#include "colors_unix.h"
#endif

#if defined(WIN32)
std::string useColors(const std::array<std::string, 2> &color)
{
    return "";
}

std::string useBold(bool x)
{
    return "";
}

std::string useFaint()
{
    return "";
}
#endif
#endif
