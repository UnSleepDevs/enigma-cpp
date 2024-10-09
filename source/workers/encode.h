#ifndef ENCODE_WORKER_H
#define ENCODE_WORKER_H
#include "../fs/libs.h"

class Encode {
    private:
        std::ofstream file;
        std::string fileName;
        std::string getFile(std::string file = "");
    public:
        void work();
        explicit Encode(std::string name) {
            fileName = name;
        };
};
#endif
