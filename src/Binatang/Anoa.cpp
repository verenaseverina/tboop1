#include "anoa.h"
#include <cstdlib>

Anoa::Anoa(int x, int y, int id) : LandAnimal(x,y,id)
{
  interaction = "Grrrr";
  content = 'A';
  srand(time(NULL));
  my_weight = 150 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (300 - 150)));
  how_much_i_eat = 5 * my_weight / 100;
  what_i_eat = 'h';
  is_tame = true;
}

Anoa& Anoa::operator=(const Anoa& a)
{
  LandAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}

char Anoa::GetContent()
{
  return content;
}

string Anoa::interact()
{
  return interaction;
}

float Anoa::GetWeight()
{
  return my_weight;
}

float Anoa::GetEat()
{
  return how_much_i_eat;
}

char Anoa::GetWEat()
{
  return what_i_eat;
}
