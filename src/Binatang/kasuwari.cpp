#include "kasuwari.h"
#include <cstdlib>

Kasuwari::Kasuwari(int x, int y, int id) : LAAnimal(x,y,id)
{
	interaction = "Arrrrkkkk";
    content='Y';
   	srand(time(NULL));
    my_weight = 25 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(59-25)));
    how_much_i_eat = 5 * my_weight / 100;
    what_i_eat = 'o';
    is_tame = true;
}

Kasuwari& Kasuwari::operator=(const Kasuwari& a)
{
    LAAnimal::operator=(a);
    content=a.content;
    interaction = a.interaction;
    my_weight = a.my_weight;
    how_much_i_eat = a.how_much_i_eat;
    what_i_eat = a.what_i_eat;
    is_tame = a.is_tame;
    return *this;
}

char Kasuwari::GetContent()
{
    return content;
}

string Kasuwari::interact()
{
    return interaction;
}

float Kasuwari::GetWeight()
{
    return my_weight;
}

float Kasuwari::GetEat()
{
    return how_much_i_eat;
}

char Kasuwari::GetWEat()
{
    return what_i_eat;
}
