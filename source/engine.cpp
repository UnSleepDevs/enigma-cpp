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

char16_t Engine::move(char16_t value, int n, bool sentido)
{
  char16_t ascii = value;
  char16_t tReturn = sentido ? ascii + current : ascii - current;
  if(n == 0){
    engine_movement();
    n++;
  }
   return next != nullptr ? next->move(tReturn, 1, sentido) : tReturn;
};
