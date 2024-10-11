#include "config.h"
std::ofstream ConfigReader::locate_file(){
    if(fileLocation == "")
        fileLocation = DEFAULT_CONFIG_LOCATION;

    return FileSystem::read_file(fileLocation);
};

void ConfigReader::parseConfig(){

}
