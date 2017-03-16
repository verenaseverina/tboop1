#include "land_air_animal.h"


LAAnimal::LAAnimal(int x, int y,int id) : Animal(x,y,id) {
  hab = new char[size];
  hab[0] = '^';
  hab[1] = '`';
}

LAAnimal::~LAAnimal() {
  delete [] hab;
}

LAAnimal& LAAnimal::operator=(const LAAnimal& a) {
  Animal::operator=(a);
  delete [] hab;
  hab = new char[size];
  hab[0] = '^';
  hab[1] = '`';
  return *this;
}

int LAAnimal::GetSize() {
  return size;
}
