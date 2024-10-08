#include "./raw_mode.h"

void RawTerm::enableRawMode(){
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(RawTerm::disableRawMode);

    struct termios raw = orig_termios;
    raw.c_lflag &= ~(ECHO | ICANON);

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

void RawTerm::disableRawMode(){
      tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}
