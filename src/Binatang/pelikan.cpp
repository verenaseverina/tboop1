#include "pelikan.h"
#include <cstdlib>

Pelikan::Pelikan(int x, int y, int id) : WAAnimal(x,y,id)
{
	interaction = "Aaaakk";
    content='Z';
   	srand(time(NULL));
    my_weight = 2.8 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(15-2.8)));
    how_much_i_eat = 26.67 * my_weight / 100 ;
    what_i_eat = 'c';
    is_tame = true;
}

Pelikan& Pelikan::operator=(const Pelikan& a)
{
    WAAnimal::operator=(a);
    content=a.content;
    interaction = a.interaction;
    my_weight = a.my_weight;
    how_much_i_eat = a.how_much_i_eat;
    what_i_eat = a.what_i_eat;
    is_tame = a.is_tame;
    return *this;
}

char Pelikan::GetContent()
{
    return content;
}

string Pelikan::interact()
{
    return interaction;
}

float Pelikan::GetWeight()
{
    return my_weight;
}

float Pelikan::GetEat()
{
    return how_much_i_eat;
}

char Pelikan::GetWEat()
{
    return what_i_eat;
}
