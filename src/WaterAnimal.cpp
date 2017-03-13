#include "WaterAnimal.h"

WaterAnimal::WaterAnimal(int x, int y,int id) : Animal(x,y,id)
{
	hab=new char[size];
	hab[0]='#';
}

WaterAnimal::~WaterAnimal()
{
	delete [] hab;
}

WAAnimal& WAWnimal::operator=(const WAAnimal& a)
{
	Animal::operator=(a);
	delete [] hab;
	hab=new char[size];
	hab[0]='#';
}

int WaterAnimal::GetSize()
{
	return size;
}