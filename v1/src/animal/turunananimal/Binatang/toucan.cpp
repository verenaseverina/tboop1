#include "toucan.h"
#include <cstdlib>

Toucan::Toucan(int x, int y, int id) : AirAnimal(x,y,id) {
  interaction = "Kwwaakk";
  content = 'T';
  srand(time(NULL));
  my_weight = 0.592 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (0.760 - 0.592)));
  how_much_i_eat = 0.5*my_weight;
  what_i_eat = 'o';
  is_tame = true;
}
Toucan& Toucan::operator=(const Toucan& a) {
  AirAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Toucan::GetContent() {
  return content;
}
string Toucan::Interact() {
  return interaction;
}
float Toucan::GetWeight() {
  return my_weight;
}
float Toucan::GetEat() {
  return how_much_i_eat;
}
char Toucan::GetWEat() {
  return what_i_eat;
}
