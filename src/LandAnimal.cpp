#include "LandAnimal.h"


LandAnimal::LandAnimal(int x, int y,int id) : Animal(x,y,id)
{
	hab=new char[size];
	hab[0]='x';
}

LandAnimal::~LandAnimal()
{
	delete [] hab;
}

LandAnimal& LandWnimal::operator=(const LandAnimal& a)
{
	Animal::operator=(a);
	delete [] hab;
	hab=new char[size];
	hab[0]='x';
}