#include "../ui/utils.h"

std::map<std::string, int> Mapa;
void fillMap(){
    Mapa["enc"] = 0;
    Mapa["encrypt"] = 0;
    Mapa["deco"] = 1;
    Mapa["decode"] = 1;
    Mapa["help"] = 2;
}

std::pair<int, std::string> Utils::parse_args(char** argv, int argc){
    fillMap();
    std::pair<int, std::string> returnable;
    if(argc < 2){
        std::cout << "[ARGS PARSER] - Please put more than one argument, for more type help" << std::endl;
        exit(EXIT_FAILURE);
    }
    returnable.first = !!Mapa[argv[1]] ? Mapa[argv[1]] : 0;
    if(argc >= 3){
        returnable.second = argv[2];
    }
    else{
        returnable.second = "type";
    }
    return returnable;
};
