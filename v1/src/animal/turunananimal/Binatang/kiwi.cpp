#include "kiwi.h"
#include <cstdlib>

Kiwi::Kiwi(int x, int y, int id) : LAAnimal(x,y,id) {
  interaction = "*walk and fly slightly*";
  content = 'I';
  srand(time(NULL));
  my_weight = 1 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (3 - 1)));
  how_much_i_eat = 5 * my_weight / 100;
  what_i_eat = 'o';
  is_tame = true;
}
Kiwi& Kiwi::operator=(const Kiwi& a) {
  LAAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Kiwi::GetContent() {
  return content;
}
string Kiwi::Interact() {
  return interaction;
}
float Kiwi::GetWeight() {
  return my_weight;
}
float Kiwi::GetEat() {
  return how_much_i_eat;
}
char Kiwi::GetWEat() {
  return what_i_eat;
}
