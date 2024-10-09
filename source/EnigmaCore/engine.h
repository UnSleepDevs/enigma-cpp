#ifndef ENGINE_H
#define ENGINE_H

#include "../libs.h"
#include "abstract.h"

class Engine {
    private:
        AbstractEngine* Variables;
        int current;
        Engine* next = nullptr; // Initialize to nullptr
        bool hasOtherEngine();
        void engine_movement();

    public:
        explicit Engine(); // Default constructor
        explicit Engine(AbstractEngine* EngineConfig) :
            Variables(EngineConfig), current(EngineConfig->StartAt){}
        char move(char value, int n = 0, bool sentido = true);
        void connected_next();
        void connect(Engine* next);
};

#endif
