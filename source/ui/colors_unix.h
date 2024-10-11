#ifndef UNIX_COLORS
#define UNIX_COLORS

#include "../libs.h"

#define DEFAULT "\033[39m"
#define DEFAULT_BACK "\033[49m"
#define ALL_DEFAULT "\033[0m"

#define BLACK "\033[30m"
#define BLACK_BACKGROUND "\033[40m"

#define DARK_RED "\033[31m"
#define DARK_RED_BACKGROUND "\033[41m"

#define DARK_GREEN "\033[32m"
#define DARK_GREEN_BACKGROUND "\033[42m"

#define DARK_YELLOW "\033[33m"
#define DARK_YELLOW_BACKGROUND "\033[43m"

#define DARK_BLUE "\033[34m"
#define DARK_BLUE_BACKGROUND "\033[44m"

#define DARK_MAGENTA "\033[35m"
#define DARK_MAGENTA_BACKGROUND "\033[45m"

#define DARK_CYAN "\033[36m"
#define DARK_CYAN_BACKGROUND "\033[46m"

#define LIGHT_GRAY "\033[37m"
#define LIGHT_GRAY_BACKGROUND "\033[47m"

#define DARK_GRAY "\033[90m"
#define DARK_GRAY_BACKGROUND "\033[100m"

#define RED "\033[91m"
#define RED_BACKGROUND "\033[101m"

#define GREEN "\033[92m"
#define GREEN_BACKGROUND "\033[101m"

#define ORANGE "\033[93m"
#define ORANGE_BACKGROUND "\033[103m"

#define BLUE "\033[94m"
#define BLUE_BACKGROUND "\033[104m"

#define MANGENTA "\033[95m"
#define MANGENTA_BACKGROUND "\033[105m"

#define CYAN "\033[96m"
#define CYAN_BACKGROUND "\033[106m"

#define WHITE "\033[97m"
#define WHITE_BACKGROUND "\033[107m"

std::string useColor(const std::array<std::string, 2> &color);
std::string useBold(bool bold);
std::string useFaint();
#endif
