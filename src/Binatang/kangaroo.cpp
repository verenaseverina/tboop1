#include "kangaroo.h"
#include <cstdlib>

Kangaroo::Kangaroo(int x, int y, int id) : LandAnimal(x,y,id) {
  interaction = "Jummpp";
  content = 'D';
  srand(time(NULL));
  my_weight = 18 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (100 - 18)));
  how_much_i_eat = 0.35 * my_weight / 100;
  what_i_eat = 'h';
  is_tame = true;
}
Kangaroo& Kangaroo::operator=(const Kangaroo& a) {
  LandAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Kangaroo::GetContent() {
  return content;
}
string Kangaroo::interact() {
  return interaction;
}
float Kangaroo::GetWeight() {
  return my_weight;
}
float Kangaroo::GetEat() {
  return how_much_i_eat;
}
char Kangaroo::GetWEat() {
  return what_i_eat;
}
