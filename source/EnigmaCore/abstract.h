#ifndef ABSTRACT_ENGINE_H
#define ABSTRACT_ENGINE_H

#define DefaultInit 1
#define DefaultMaxEngine 10
#define DefaultStartAt 1

class AbstractEngine {
    public:
        int InitPlace;
        int MaxPlace;
        int StartAt;
        explicit AbstractEngine(int init = DefaultInit, int max = DefaultMaxEngine, int start = DefaultStartAt):
            InitPlace(init), MaxPlace(max), StartAt(start) {};
};

#endif
