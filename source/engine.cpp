#include "engine.h"

Engine::Engine(){

}

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

char Engine::move(char value, int n){
  unsigned int ascii = (int) value;
  unsigned int tReturn = ascii + current;
  if(n == 0){
    engine_movement();
    n++;
  }
   return next != nullptr ? next->move((char) tReturn, 1) : char(tReturn);
};
