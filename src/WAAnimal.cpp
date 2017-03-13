#include "WAAnimal.h"


WAAnimal::WAAnimal(int x, int y,int id) : Animal(x,y,id)
{
	hab=new char[size];
	hab[0]='#';
	hab[1]='o';
}

WAAnimal::~WAAnimal()
{
	delete [] hab;
}

WAAnimal& WAWnimal::operator=(const WAAnimal& a)
{
	Animal::operator=(a);
	delete [] hab;
	hab=new char[size];
	hab[0]='#';
	hab[1]='o';
}

int WAAnimal::GetSize()
{
	return size;
}