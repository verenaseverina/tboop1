#include "kelelawar.h"
#include <cstdlib>

Kelelawar::Kelelawar(int x, int y, int id) : AirAnimal(x,y,id) {
  interaction = "Kiiiaaa";
  content='K';
  srand(time(NULL));
  my_weight = 1.2 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (1.4 - 1.2)));
  how_much_i_eat = my_weight;
  what_i_eat = 'o';
  is_tame = true;
}
Kelelawar& Kelelawar::operator=(const Kelelawar& a) {
  AirAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Kelelawar::GetContent() {
  return content;
}
string Kelelawar::interact() {
  return interaction;
}
float Kelelawar::GetWeight() {
  return my_weight;
}
float Kelelawar::GetEat() {
  return how_much_i_eat;
}
char Kelelawar::GetWEat() {
  return what_i_eat;
}
