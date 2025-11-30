#include "engine.h"

Engine::Engine() {

    horsepower = 0;
    displacement = 0.0;
}

Engine::Engine(int horsepower, double dispalcement)
{
    this->horsepower = horsepower;
    this->displacement = dispalcement;
}

int Engine::getHorsepower()
{
    return horsepower;
}

void Engine::setHorsepower(int horsepower)
{
    this->horsepower = horsepower;

}

double Engine::getDisplacement()
{
    return displacement;
}

void Engine::setDisplacement(double displacement)
{
    this->displacement = displacement;

}

