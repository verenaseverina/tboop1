#include "water_air_animal.h"


WAAnimal::WAAnimal(int x, int y,int id) : Animal(x,y,id) {
  hab = new char[size];
  hab[0] = '#';
  hab[1] = 'o';
}

WAAnimal::~WAAnimal() {
  delete [] hab;
}

WAAnimal& WAAnimal::operator=(const WAAnimal& a) {
  Animal::operator=(a);
  delete [] hab;
  hab = new char[size];
  hab[0] = '~';
  hab[1] = '`';
  return *this;
}

int WAAnimal::GetSize() {
  return size;
}
