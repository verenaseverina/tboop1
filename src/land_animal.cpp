#include "land_animal.h"


LandAnimal::LandAnimal(int x, int y,int id) : Animal(x,y,id)
{
  hab=new char[size];
  hab[0]='x';
}

LandAnimal::~LandAnimal()
{
  delete [] hab;
}

LandAnimal& LandAnimal::operator=(const LandAnimal& a)
{
  Animal::operator=(a);
  delete [] hab;
  hab=new char[size];
  hab[0]='^';
  return *this;
}

int LandAnimal::GetSize()
{
  return size;
}
