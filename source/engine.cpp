#include "engine.h"

Engine::Engine(){};

bool Engine::hasOtherEngine(){
    return next != nullptr;
}
void Engine::engine_movement(){
    current++;
    if(current > max_engine){
        current = init_place;
        if(hasOtherEngine()){
            next->connected_next();
        }
    }
}

void Engine::connect(Engine* next){
    this->next = next;
};

void Engine::connected_next(){
    current++;
    if(current >= max_engine){
        current = init_place;
    }
}

char32_t Engine::move(char32_t value, int n, bool sentido)
{
  int32_t tReturn = sentido ? value + current : value - current;
  if(n == 0){
    engine_movement();
    n++;
  }
   return next != nullptr ? next->move( (char32_t) tReturn , 1, sentido) : (char32_t) tReturn;
};
