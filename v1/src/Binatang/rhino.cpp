#include "rhino.h"
#include <cstdlib>

Rhino::Rhino(int x, int y, int id) : LandAnimal(x,y,id) {
  interaction = "Woooo";
  content = 'R';
  srand(time(NULL));
  my_weight = 900 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (2300 - 900)));
  how_much_i_eat = 7.23 * my_weight / 100;
  what_i_eat = 'h';
  is_tame = false;
}
Rhino& Rhino::operator=(const Rhino& a) {
  LandAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Rhino::GetContent() {
  return content;
}
string Rhino::Interact() {
  return interaction;
}
float Rhino::GetWeight() {
  return my_weight;
}
float Rhino::GetEat() {
  return how_much_i_eat;
}
char Rhino::GetWEat() {
  return what_i_eat;
}
