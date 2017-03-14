#include "tiger.h"
#include <cstdlib>

Tiger::Tiger(int x, int y, int id) : LandAnimal(x,y,id) {
  interaction = "Roooarrrr";
  content = 'H';
  srand(time(NULL));
  my_weight = 90 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (310 - 90)));
  how_much_i_eat = 7.23 * my_weight / 100;
  what_i_eat = 'c';
  is_tame = false;
}
Tiger& Tiger::operator=(const Tiger& a) {
  LandAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Tiger::GetContent() {
  return content;
}
string Tiger::Interact() {
  return interaction;
}
float Tiger::GetWeight() {
  return my_weight;
}
float Tiger::GetEat() {
  return how_much_i_eat;
}
char Tiger::GetWEat() {
  return what_i_eat;
}
