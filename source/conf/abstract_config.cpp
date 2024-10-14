#include "abstract_config.h"

const int max_1 = 10, max_2 = 25, start_1 = 1, start_2 = 10;
const int magic_number = 10e7;
std::vector<AbstractEngine *> AbstractConfig::generate_default_engines()
{
    AbstractEngine engine1(start_1, max_1);
    AbstractEngine engine2(start_2, max_2);

    std::vector<AbstractEngine *> engines = {&engine1, &engine2};
    return engines;
}

void AbstractConfig::cleanMemory()
{
    if (abstractEngines.size() == 0)
    {
        return;
    }

    for (int i = 0; i < abstractEngines.size(); i++)
    {
        delete abstractEngines[i];
    }
};

/***
*   funcionamiento del algoritmo:
*   x (date) / 10e7
*   y (date) % 10e7
*/
AbstractEngine AbstractConfig::generate_date_rotor(time_t &date)
{
    int start_at = date % magic_number;
    int end_at = date / magic_number;

    return AbstractEngine(start_at, end_at);
}

AbstractEngine AbstractConfig::generate_date_rotor()
{
    time_t timer(NULL);
    time(&timer);

    int end_at = timer / magic_number;
    int start_at = timer % magic_number;

    return AbstractEngine(start_at, end_at);
};
