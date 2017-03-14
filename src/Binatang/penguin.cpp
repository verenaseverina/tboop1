#include "penguin.h"
#include <cstdlib>

Penguin::Penguin(int x, int y, int id) : LWAnimal(x,y,id) {
  interaction = "Sqqqaaa";
  content = 'P';
  srand(time(NULL));
  my_weight = 27 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (41 - 27)));
  how_much_i_eat = 0.9 * my_weight / 27;
  what_i_eat = 'c';
  is_tame = true;
}
Penguin& Penguin::operator=(const Penguin& a) {
  LWAnimal::operator=(a);
  content = a.content;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}
char Penguin::GetContent() {
  return content;
}
string Penguin::interact() {
  return interaction;
}
float Penguin::GetWeight() {
  return my_weight;
}
float Penguin::GetEat() {
  return how_much_i_eat;
}
char Penguin::GetWEat() {
  return what_i_eat;
}
