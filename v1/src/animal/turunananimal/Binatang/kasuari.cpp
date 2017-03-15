#include "kasuari.h"
#include <cstdlib>

Kasuari::Kasuari(int x, int y, int id) : LAAnimal(x,y,id) {
  interaction = "Arrrrkkkk";
  content = 'Y';
  srand(time(NULL));
  my_weight = 25 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (59 - 25)));
  how_much_i_eat = 5 * my_weight / 100;
  what_i_eat = 'o';
  is_tame = true;
}
Kasuari& Kasuari::operator=(const Kasuari& a) {
  LAAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Kasuari::GetContent() {
  return content;
}
string Kasuari::Interact() {
  return interaction;
}
float Kasuari::GetWeight() {
  return my_weight;
}
float Kasuari::GetEat() {
  return how_much_i_eat;
}
char Kasuari::GetWEat() {
  return what_i_eat;
}
