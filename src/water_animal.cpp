#include "water_animal.h"

WaterAnimal::WaterAnimal(int x, int y,int id) : Animal(x,y,id)
{
  hab=new char[size];
  hab[0]='~';
}

WaterAnimal::~WaterAnimal()
{
  delete [] hab;
}

WaterAnimal& WaterAnimal::operator=(const WaterAnimal& a)
{
  Animal::operator=(a);
  delete [] hab;
  hab=new char[size];
  hab[0]='#';
  return *this;
}

int WaterAnimal::GetSize()
{
  return size;
}
