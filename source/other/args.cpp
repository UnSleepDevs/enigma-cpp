#include "../utils/utils.h"

std::map<std::string, int> Utils::Mapa;
void Utils::fillMap(){
    if(Mapa.empty()){
        Mapa["enc"] = 0;
        Mapa["encrypt"] = 0;
        Mapa["deco"] = 1;
        Mapa["decode"] = 1;
        Mapa["help"] = 2;
    }
}

std::pair<int, std::string> Utils::parse_args(char * argv[], int argc){
    fillMap();
    if(argc < 2){
        throw std::runtime_error("[ARGS PARSER] - Please put more than one argument, for more type help");
    }
    auto it = Mapa.find(argv[1]);
    int command_type = (it != Mapa.end()) ? it->second : -1;
    std::string secondArg = (argc >= 3) ? argv[2] : "type";
    return {command_type, secondArg};
};
