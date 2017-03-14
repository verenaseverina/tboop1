#include "elang_botak.h"
#include <cstdlib>

ElangB::ElangB(int x, int y, int id) : AirAnimal(x,y,id) {
  interaction = "Kiiiaaa";
  content = 'E';
  srand(time(NULL));
  my_weight = 4 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/(6 - 4)));
  how_much_i_eat = 0.4535 * my_weight/4;
  what_i_eat = 'c';
  is_tame = true;
}
ElangB& ElangB::operator=(const ElangB& a) {
  AirAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char ElangB::GetContent() {
  return content;
}
string ElangB::Interact() {
  return interaction;
}
float ElangB::GetWeight() {
  return my_weight;
}
float ElangB::GetEat() {
  return how_much_i_eat;
}
char ElangB::GetWEat() {
  return what_i_eat;
}
