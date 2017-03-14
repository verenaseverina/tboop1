#include "panda.h"
#include <cstdlib>

Panda::Panda(int x, int y, int id) : LandAnimal(x,y,id) { 
  interaction = "Mmmm";
  content = 'B';
  srand(time(NULL));
  my_weight = 70 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (100 - 70)));
  how_much_i_eat = 38 * my_weight/100;
  what_i_eat = 'h';
  is_tame = true;
}
Panda& Panda::operator=(const Panda& a) {
  LandAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Panda::GetContent() {
  return content;
}
string Panda::interact() {
  return interaction;
}
float Panda::GetWeight() {
  return my_weight;
}
float Panda::GetEat() {
  return how_much_i_eat;
}
char Panda::GetWEat() {
  return what_i_eat;
}
