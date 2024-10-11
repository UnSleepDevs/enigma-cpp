#ifndef RCONFIG_H
#define RCONFIG_H

// parsing config
#include <cstddef>
#include <fstream>
#include <json/json.h>

// libs to read config file
#include "../fs/fs.h"
#include "../utils/utils.h"

#define DEFAULT_CONFIG_LOCATION "config.json"

class ConfigReader {
    protected:
        std::string fileLocation;
        std::ofstream locate_file();
        std::ofstream File;
    public:
        explicit ConfigReader(std::string &location);
        void parseConfig();
};

#endif
