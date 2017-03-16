#include "cormorants.h"
#include <cstdlib>

Cormorants::Cormorants(int x, int y, int id) : WAAnimal(x,y,id) {
  interaction = "*fly and swim*";
  content = 'M';
  srand(time(NULL));
  my_weight = 2.5 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (5 - 2.5)));
  how_much_i_eat = 10 * my_weight / 100;
  what_i_eat = 'c';
  is_tame = true;
}
Cormorants& Cormorants::operator=(const Cormorants& a) {
  WAAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Cormorants::GetContent() {
  return content;
}
string Cormorants::Interact() {
  return interaction;
}
float Cormorants::GetWeight() {
  return my_weight;
}
float Cormorants::GetEat() {
  return how_much_i_eat;
}
char Cormorants::GetWEat() {
  return what_i_eat;
}
