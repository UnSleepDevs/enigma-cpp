#ifndef RAW_MODE
#define RAW_MODE
#include "../libs.h"
namespace RawTerm {
    struct termios orig_termios;

    void enableRawMode();
    void disableRawMode();
};
#endif
