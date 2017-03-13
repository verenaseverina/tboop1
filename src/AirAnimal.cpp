#include "AirAnimal.h"


AirAnimal::AirAnimal(int x, int y,int id) : Animal(x,y,id)
{
	hab=new char[size];
	hab[0]='o';
}

AirAnimal::~AirAnimal()
{
	delete [] hab;
}

AirAnimal& AirAnimal::operator=(const AirAnimal& a)
{
	Animal::operator=(a);
	delete [] hab;
	hab=new char[size];
	hab[0]='o';
}