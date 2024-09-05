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
    char16_t move(char16_t value, int n = 0, bool sentido = true);
    void connected_next();
    void connect(Engine* next);
};

extern "C" {
    Engine *engine_factory (){
        return new Engine();
    }
    char16_t move(Engine *engine, char16_t value, int n, bool sentido){
        return engine->move(value, n, sentido);
    }

    void connect(Engine *engine, Engine *other){
        engine->connect(other);
    }

    void destroy(Engine *engine){
        delete engine;
    }
}
#endif // ENGINE_H
