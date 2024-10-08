#include "utils.h"

void Utils::setCursorPosition(int PosX, int PosY, std::string &value){
    std::cout << "\033[" << PosY << ";" << PosX << "H" << value;
}

void Utils::ResetCursorPosition(){
    std::cout << "\033[u";
}

std::pair<int, int> Utils::getConsoleSize(){
    struct winsize w_size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w_size);

    return {w_size.ws_row, w_size.ws_col};
}
