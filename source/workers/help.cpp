#include "help.h"
void help(){

    std::cout << useColor({"", WHITE_BACKGROUND}) << "LittleEnigma"
    << useColor({"", ""}) << "\tUsage:"<< useBold(true) << " lenigma [command] "
    << useFaint() << "...args" << std::endl << useColor({"", ""});

    std::cout << useBold(true) << "encode | enc" << useBold(false) << "\t\tfile? Encode a file" << std::endl
    << useBold(true) << "decode | dec" << useBold(false) << "\t\tfile? Decode a file" << std::endl
    << useBold(true) << "json | config" << useBold(false) << "\t\tfile? Provides a configuration file" << std::endl
    << useBold(true) << "help" << useBold(false) << "\t\t Shows this message" << std::endl;
}
