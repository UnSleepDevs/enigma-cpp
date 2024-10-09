#ifndef READ_FS
#define READ_FS
#include "libs.h"

class FileSystem {
    public:
        static std::ofstream read_file(std::string &file);
        static bool write_file(char *&buffer, std::string &file);
};
#endif
