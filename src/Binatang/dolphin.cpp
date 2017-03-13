#include "dolphin.h"
#include <cstdlib>

Dolphin::Dolphin(int x, int y, int id) : WaterAnimal(x,y,id)
{
  interaction = "Cuitttt";
  content='L';
  srand(time(NULL));
  my_weight = 110 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(200-110)));
  how_much_i_eat = (0.04 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.09-0.04)))) * my_weight;
  what_i_eat = 'c';
  is_tame = true;
}

Dolphin& Dolphin::operator=(const Dolphin& a)
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

char Dolphin::GetContent()
{
  return content;
}

string Dolphin::interact()
{
  return interaction;
}

float Dolphin::GetWeight()
{
  return my_weight;
}

float Dolphin::GetEat()
{
  return how_much_i_eat;
}

char Dolphin::GetWEat()
{
  return what_i_eat;
}
