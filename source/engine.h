#ifndef ENGINE_H
#define ENGINE_H
#include "./libs.h"
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

#endif
