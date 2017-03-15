#include "ostrich.h"
#include <cstdlib>

Ostrich::Ostrich(int x, int y, int id) : LAAnimal(x,y,id) {
  interaction = "Nguuukkk";
  content = 'O';
  srand(time(NULL));
  my_weight = 100 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (120 - 100)));
  how_much_i_eat = 5 * my_weight / 100;
  what_i_eat = 'o';
  is_tame = true;
}
Ostrich& Ostrich::operator=(const Ostrich& a) {
  LAAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Ostrich::GetContent() {
  return content;
}
string Ostrich::Interact() {
  return interaction;
}
float Ostrich::GetWeight() {
  return my_weight;
}
float Ostrich::GetEat() {
  return how_much_i_eat;
}
char Ostrich::GetWEat() {
  return what_i_eat;
}
