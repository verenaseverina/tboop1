#include "crocodile.h"
#include <cstdlib>

Crocodile::Crocodile(int x, int y, int id) : LWAnimal(x,y,id)
{
  interaction = "Rrrrr";
  content = 'C';
  srand(time(NULL));
  my_weight = 400  + static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX / (700 - 400)));
  how_much_i_eat = 2 * my_weight / 700;
  what_i_eat = 'c';
  is_tame = false;
}

Crocodile& Crocodile::operator=(const Crocodile& a)
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

char Crocodile::GetContent()
{
  return content;
}

string Crocodile::interact()
{
  return interaction;
}

float Crocodile::GetWeight()
{
  return my_weight;
}

float Crocodile::GetEat()
{
  return how_much_i_eat;
}

char Crocodile::GetWEat()
{
  return what_i_eat;
}
