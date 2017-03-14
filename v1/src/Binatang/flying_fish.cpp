#include "flying_fish.h"
#include <cstdlib>

FlyingFish::FlyingFish(int x, int y, int id) : WAAnimal(x,y,id) {
  interaction = "*stride*";
  content = 'F';
  srand(time(NULL));
  my_weight = 1 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (7 - 1)));
  how_much_i_eat = 5 * my_weight / 100;
  what_i_eat = 'o';
  is_tame = true;
}
FlyingFish& FlyingFish::operator=(const FlyingFish& a) {
  WAAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char FlyingFish::GetContent() {
  return content;
}
string FlyingFish::Interact() {
  return interaction;
}
float FlyingFish::GetWeight() {
  return my_weight;
}
float FlyingFish::GetEat() {
  return how_much_i_eat;
}
char FlyingFish::GetWEat() {
  return what_i_eat;
}
