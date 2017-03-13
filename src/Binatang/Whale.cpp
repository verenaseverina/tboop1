#include "whale.h"
#include <cstdlib>

Whale::Whale(int x, int y, int id) : WaterAnimal(x,y,id)
{
	interaction = "Wet";
    content='W';
   	srand(time(NULL));
    my_weight = 14000 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(16000-14000)));
    how_much_i_eat = 0.0667 * my_weight;
    what_i_eat = 'c';
    is_tame = true;
}
Whale& Whale::operator=(const Whale& a)
{
    WaterAnimal::operator=(a);
    content=a.content;
    interaction = a.interaction;
    my_weight = a.my_weight;
    how_much_i_eat = a.how_much_i_eat;
    what_i_eat = a.what_i_eat;
    is_tame = a.is_tame;
    return *this;
}

char Whale::GetContent()
{
    return content;
}

string Whale::interact()
{
    return interaction;
}

float Whale::GetWeight()
{
    return my_weight;
}

float Whale::GetEat()
{
    return how_much_i_eat;
}

char Whale::GetWEat()
{
    return what_i_eat;
}
