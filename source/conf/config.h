#ifndef RCONFIG_H
#define RCONFIG_H

// parsing config
#include <json/json.h>

// libs to read config file
#include "../fs/libs.h"


class ConfigReader {
    protected:
        std::string fileLocation;
        std::string locate_file();
    public:
        void parseConfig();
};

#endif
