#include "hippopotamus.h"
#include <cstdlib>

Hippopotamus::Hippopotamus(int x, int y, int id) : LWAnimal(x,y,id)
{
  interaction = "Grooowwll";
  content='N';
     srand(time(NULL));
  my_weight = 1400 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(3200-1400)));
  how_much_i_eat = 40 * my_weight / 2400;
  what_i_eat = 'h';
  is_tame = true;
}

Hippopotamus& Hippopotamus::operator=(const Hippopotamus& a)
{
  LWAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}

char Hippopotamus::GetContent()
{
  return content;
}

string Hippopotamus::interact()
{
  return interaction;
}

float Hippopotamus::GetWeight()
{
  return my_weight;
}

float Hippopotamus::GetEat()
{
  return how_much_i_eat;
}

char Hippopotamus::GetWEat()
{
  return what_i_eat;
}
