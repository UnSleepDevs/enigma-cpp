#include "utils.h"
#define RESET_CURSOR "\033[u"
#define CLEAR_CONSOLE "\033[H\033[2J\033[3J"
#define CLEAR_CONSOLE_BYTE 11


void Utils::clear_console(){
    #ifndef __linux__
        std::cout << "\033c";
    #endif
    #ifdef WIN32
        std::system("cls");
    #endif
}
