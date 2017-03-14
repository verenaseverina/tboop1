#include "shark.h"
#include <cstdlib>

Shark::Shark(int x, int y, int id) : WaterAnimal(x,y,id) {
  interaction = "Wett";
  content = 'S';
  srand(time(NULL));
  my_weight = 21500 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (30000 - 21500)));
  how_much_i_eat = 0.0667 * my_weight;
  what_i_eat = 'c';
  is_tame = false;
}
Shark& Shark::operator=(const Shark& a) {
  WaterAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Shark::GetContent() {
  return content;
}
string Shark::interact() {
  return interaction;
}
float Shark::GetWeight() {
  return my_weight;
}
float Shark::GetEat() {
  return how_much_i_eat;
}
char Shark::GetWEat() {
  return what_i_eat;
}
