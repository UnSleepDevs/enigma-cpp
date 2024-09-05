#ifndef ENGINE_H
#define ENGINE_H
#include <codecvt>
#include <iostream>

class Engine {
private:
    int init_place {1};
    int max_engine {10};
    int current = init_place;
    Engine* next = nullptr; // Initialize to nullptr
    bool hasOtherEngine();
    void engine_movement();

public:
    explicit Engine(); // Default constructor
    explicit Engine(int init, int max) : init_place(init), max_engine(max), current(init_place), next(nullptr) {}
    char move(char value, int n = 0, bool sentido = true);
    void connected_next();
    void connect(Engine* next);
};

extern "C" {
    Engine *engine_factory (){
        return new Engine();
    }
    std::string move(Engine *engine, std::string value, int n, bool sentido){
        std::string r = "";
        for(auto character : r){
            r += engine->move(character, n, sentido);
        }
        return r;
    }

    void connect(Engine *engine, Engine *other){
        engine->connect(other);
    }

    void destroy(Engine *engine){
        delete engine;
    }
}
#endif // ENGINE_H
