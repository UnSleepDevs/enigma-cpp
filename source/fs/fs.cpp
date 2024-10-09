#include "fs.h"

std::ofstream FileSystem::read_file(std::string &file){
    std::ofstream File(file);
    if(!File)
        throw std::runtime_error("The file does not exists on disk!!!");
    return File;
};


bool FileSystem::write_file(char *&buffer, std::string &file){
    int size = sizeof(buffer) / sizeof(int);
    try {
        auto f = read_file(file);
        f << buffer;
    } catch (std::nullptr_t){
        std::cout << "An unexepted error has been ocurred while file writing";
        exit(-1);
    };

    return true;
}
